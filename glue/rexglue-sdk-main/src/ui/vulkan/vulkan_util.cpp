/**
 ******************************************************************************
 * Xenia : Xbox 360 Emulator Research Project                                 *
 ******************************************************************************
 * Copyright 2020 Ben Vanik. All rights reserved.                             *
 * Released under the BSD license - see LICENSE in the root for more details. *
 ******************************************************************************
 *
 * @modified    Tom Clay, 2026 - Adapted for ReXGlue runtime
 */

#include <algorithm>
#include <atomic>
#include <cstdint>
#include <functional>
#include <unordered_map>
#include <vector>

#include <rex/assert.h>
#include <rex/logging.h>
#include <rex/math.h>
#include <rex/ui/vulkan/device.h>
#include <rex/ui/vulkan/util.h>
#include <rex/ui/vulkan/spirv_int64_lowering.h>
#include <rex/ui/vulkan/spirv_version_downgrade.h>
#include <rex/cvar.h>

REXCVAR_DEFINE_BOOL(vulkan_force_int64_lowering, false, "Vulkan",
                    "Lower 64-bit shader integers to 32-bit pairs even when the GPU supports "
                    "shaderInt64 (testing the fallback used by GPUs without it)");

namespace rex {
namespace ui {
namespace vulkan {
namespace util {

void FlushMappedMemoryRange(const VulkanDevice* const vulkan_device, const VkDeviceMemory memory,
                            const uint32_t memory_type, const VkDeviceSize offset,
                            const VkDeviceSize memory_size, const VkDeviceSize size) {
  assert_false(size != VK_WHOLE_SIZE && memory_size == VK_WHOLE_SIZE);
  assert_true(memory_size == VK_WHOLE_SIZE || offset <= memory_size);
  assert_true(memory_size == VK_WHOLE_SIZE || size <= memory_size - offset);
  if (!size || (vulkan_device->memory_types().host_coherent & (uint32_t(1) << memory_type))) {
    return;
  }
  VkMappedMemoryRange range;
  range.sType = VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE;
  range.pNext = nullptr;
  range.memory = memory;
  range.offset = offset;
  range.size = size;
  const VkDeviceSize non_coherent_atom_size = vulkan_device->properties().nonCoherentAtomSize;
  range.offset = offset / non_coherent_atom_size * non_coherent_atom_size;
  if (size != VK_WHOLE_SIZE) {
    range.size =
        std::min(rex::round_up(offset + size, non_coherent_atom_size), memory_size) - range.offset;
  }
  vulkan_device->functions().vkFlushMappedMemoryRanges(vulkan_device->device(), 1, &range);
}

bool CreateDedicatedAllocationBuffer(const VulkanDevice* const vulkan_device,
                                     const VkDeviceSize size, const VkBufferUsageFlags usage,
                                     const MemoryPurpose memory_purpose, VkBuffer& buffer_out,
                                     VkDeviceMemory& memory_out, uint32_t* const memory_type_out,
                                     VkDeviceSize* const memory_size_out) {
  const VulkanDevice::Functions& dfn = vulkan_device->functions();
  const VkDevice device = vulkan_device->device();

  VkBufferCreateInfo buffer_create_info;
  buffer_create_info.sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
  buffer_create_info.pNext = nullptr;
  buffer_create_info.flags = 0;
  buffer_create_info.size = size;
  buffer_create_info.usage = usage;
  buffer_create_info.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
  buffer_create_info.queueFamilyIndexCount = 0;
  buffer_create_info.pQueueFamilyIndices = nullptr;
  VkBuffer buffer;
  if (dfn.vkCreateBuffer(device, &buffer_create_info, nullptr, &buffer) != VK_SUCCESS) {
    return false;
  }

  VkMemoryRequirements memory_requirements;
  dfn.vkGetBufferMemoryRequirements(device, buffer, &memory_requirements);
  uint32_t memory_type = ChooseMemoryType(vulkan_device->memory_types(),
                                          memory_requirements.memoryTypeBits, memory_purpose);
  if (memory_type == UINT32_MAX) {
    dfn.vkDestroyBuffer(device, buffer, nullptr);
    return false;
  }

  VkMemoryAllocateInfo memory_allocate_info;
  memory_allocate_info.sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
  memory_allocate_info.pNext = nullptr;
  memory_allocate_info.allocationSize = memory_requirements.size;
  memory_allocate_info.memoryTypeIndex = memory_type;
  VkMemoryDedicatedAllocateInfo memory_dedicated_allocate_info;
  if (vulkan_device->extensions().ext_1_1_KHR_dedicated_allocation) {
    memory_dedicated_allocate_info.pNext = memory_allocate_info.pNext;
    memory_allocate_info.pNext = &memory_dedicated_allocate_info;
    memory_dedicated_allocate_info.sType = VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO;
    memory_dedicated_allocate_info.pNext = nullptr;
    memory_dedicated_allocate_info.image = VK_NULL_HANDLE;
    memory_dedicated_allocate_info.buffer = buffer;
  }
  VkDeviceMemory memory;
  if (dfn.vkAllocateMemory(device, &memory_allocate_info, nullptr, &memory) != VK_SUCCESS) {
    dfn.vkDestroyBuffer(device, buffer, nullptr);
    return false;
  }

  if (dfn.vkBindBufferMemory(device, buffer, memory, 0) != VK_SUCCESS) {
    dfn.vkDestroyBuffer(device, buffer, nullptr);
    dfn.vkFreeMemory(device, memory, nullptr);
    return false;
  }

  buffer_out = buffer;
  memory_out = memory;
  if (memory_type_out) {
    *memory_type_out = memory_type;
  }
  if (memory_size_out) {
    *memory_size_out = memory_allocate_info.allocationSize;
  }
  return true;
}

bool CreateDedicatedAllocationImage(const VulkanDevice* const vulkan_device,
                                    const VkImageCreateInfo& create_info,
                                    const MemoryPurpose memory_purpose, VkImage& image_out,
                                    VkDeviceMemory& memory_out, uint32_t* const memory_type_out,
                                    VkDeviceSize* const memory_size_out) {
  // Legacy image-format queries describe ordinary images exactly. Extended
  // creation chains (external memory, format lists, etc.) require their own
  // matching properties2 query and continue through the existing creation path.
  // Why an image could not be made (rare; the caller only sees false).
  const auto log_failure = [&](const char* step, int result, uint64_t size) {
    static std::atomic<uint32_t> count{0};
    if (count.fetch_add(1, std::memory_order_relaxed) < 32) {
      REXLOG_WARN("vulkan: image {} failed: result={} format={} extent={}x{} samples={} "
                  "usage={:08X} size={}",
                  step, result, uint32_t(create_info.format), create_info.extent.width,
                  create_info.extent.height, uint32_t(create_info.samples),
                  uint32_t(create_info.usage), size);
    }
  };
  if (!create_info.pNext && !IsImageCreateInfoSupported(vulkan_device, create_info)) {
    log_failure("format-query", 0, 0);
    return false;
  }
  const VulkanDevice::Functions& dfn = vulkan_device->functions();
  const VkDevice device = vulkan_device->device();

  VkImage image;
  if (const VkResult result = dfn.vkCreateImage(device, &create_info, nullptr, &image);
      result != VK_SUCCESS) {
    log_failure("create", int(result), 0);
    return false;
  }

  VkMemoryRequirements memory_requirements;
  dfn.vkGetImageMemoryRequirements(device, image, &memory_requirements);
  uint32_t memory_type = ChooseMemoryType(vulkan_device->memory_types(),
                                          memory_requirements.memoryTypeBits, memory_purpose);
  if (memory_type == UINT32_MAX) {
    log_failure("memory-type", int(memory_requirements.memoryTypeBits), memory_requirements.size);
    dfn.vkDestroyImage(device, image, nullptr);
    return false;
  }

  VkMemoryAllocateInfo memory_allocate_info;
  memory_allocate_info.sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
  memory_allocate_info.pNext = nullptr;
  memory_allocate_info.allocationSize = memory_requirements.size;
  memory_allocate_info.memoryTypeIndex = memory_type;
  VkMemoryDedicatedAllocateInfo memory_dedicated_allocate_info;
  if (vulkan_device->extensions().ext_1_1_KHR_dedicated_allocation) {
    memory_dedicated_allocate_info.pNext = memory_allocate_info.pNext;
    memory_allocate_info.pNext = &memory_dedicated_allocate_info;
    memory_dedicated_allocate_info.sType = VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO;
    memory_dedicated_allocate_info.pNext = nullptr;
    memory_dedicated_allocate_info.image = image;
    memory_dedicated_allocate_info.buffer = VK_NULL_HANDLE;
  }
  VkDeviceMemory memory;
  if (const VkResult result = dfn.vkAllocateMemory(device, &memory_allocate_info, nullptr, &memory);
      result != VK_SUCCESS) {
    log_failure("allocate", int(result), memory_requirements.size);
    dfn.vkDestroyImage(device, image, nullptr);
    return false;
  }

  if (dfn.vkBindImageMemory(device, image, memory, 0) != VK_SUCCESS) {
    dfn.vkDestroyImage(device, image, nullptr);
    dfn.vkFreeMemory(device, memory, nullptr);
    return false;
  }

  image_out = image;
  memory_out = memory;
  if (memory_type_out) {
    *memory_type_out = memory_type;
  }
  if (memory_size_out) {
    *memory_size_out = memory_allocate_info.allocationSize;
  }
  return true;
}

bool IsImageCreateInfoSupported(const VulkanDevice* vulkan_device,
                                const VkImageCreateInfo& create_info) {
  if (!vulkan_device || create_info.pNext) {
    return false;
  }
  VkImageFormatProperties properties{};
  if (vulkan_device->vulkan_instance()->functions().vkGetPhysicalDeviceImageFormatProperties(
          vulkan_device->physical_device(), create_info.format, create_info.imageType,
          create_info.tiling, create_info.usage, create_info.flags, &properties) != VK_SUCCESS) {
    return false;
  }
  return create_info.extent.width && create_info.extent.height && create_info.extent.depth &&
         create_info.extent.width <= properties.maxExtent.width &&
         create_info.extent.height <= properties.maxExtent.height &&
         create_info.extent.depth <= properties.maxExtent.depth && create_info.mipLevels &&
         create_info.mipLevels <= properties.maxMipLevels && create_info.arrayLayers &&
         create_info.arrayLayers <= properties.maxArrayLayers &&
         (properties.sampleCounts & create_info.samples) != 0;
}

VkPipeline CreateComputePipeline(const VulkanDevice* const vulkan_device,
                                 const VkPipelineLayout layout, const VkShaderModule shader,
                                 const VkSpecializationInfo* const specialization_info,
                                 const char* const entry_point) {
  VkComputePipelineCreateInfo pipeline_create_info;
  pipeline_create_info.sType = VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO;
  pipeline_create_info.pNext = nullptr;
  pipeline_create_info.flags = 0;
  pipeline_create_info.stage.sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
  pipeline_create_info.stage.pNext = nullptr;
  pipeline_create_info.stage.flags = 0;
  pipeline_create_info.stage.stage = VK_SHADER_STAGE_COMPUTE_BIT;
  pipeline_create_info.stage.module = shader;
  pipeline_create_info.stage.pName = entry_point;
  pipeline_create_info.stage.pSpecializationInfo = specialization_info;
  pipeline_create_info.layout = layout;
  pipeline_create_info.basePipelineHandle = VK_NULL_HANDLE;
  pipeline_create_info.basePipelineIndex = -1;
  VkPipeline pipeline;
  if (vulkan_device->functions().vkCreateComputePipelines(vulkan_device->device(), VK_NULL_HANDLE,
                                                          1, &pipeline_create_info, nullptr,
                                                          &pipeline) != VK_SUCCESS) {
    return VK_NULL_HANDLE;
  }
  return pipeline;
}

VkPipeline CreateComputePipeline(const VulkanDevice* const vulkan_device, VkPipelineLayout layout,
                                 const uint32_t* shader_code, size_t shader_code_size_bytes,
                                 const VkSpecializationInfo* specialization_info,
                                 const char* entry_point) {
  const VkShaderModule shader =
      CreateShaderModule(vulkan_device, shader_code, shader_code_size_bytes);
  if (shader == VK_NULL_HANDLE) {
    return VK_NULL_HANDLE;
  }
  const VkPipeline pipeline =
      CreateComputePipeline(vulkan_device, layout, shader, specialization_info, entry_point);
  vulkan_device->functions().vkDestroyShaderModule(vulkan_device->device(), shader, nullptr);
  return pipeline;
}

bool DowngradeSpirvForDevice(const VulkanDevice* const vulkan_device, const uint32_t* const code,
                             const size_t code_size_bytes, std::vector<uint32_t>& downgraded) {
  if (vulkan_device->properties().apiVersion >= VK_MAKE_API_VERSION(0, 1, 2, 0)) return false;
  const size_t word_count = code_size_bytes / sizeof(uint32_t);
  if (word_count < 5 || code[1] <= 0x00010300u) return false;
  std::string why;
  const bool ok = spirv_version::DowngradeTo13(code, word_count, downgraded, &why);
  if (ok) {
    REXLOG_INFO("vulkan: Vulkan 1.1 device: SPIR-V {}.{} shader rewritten as SPIR-V 1.3",
                (code[1] >> 16) & 0xff, (code[1] >> 8) & 0xff);
  } else {
    REXLOG_WARN("vulkan: SPIR-V {}.{} shader cannot be rewritten for Vulkan 1.1 ({})",
                (code[1] >> 16) & 0xff, (code[1] >> 8) & 0xff, why);
  }
  return ok;
}

bool LowerUnsupportedInt64(const VulkanDevice* const vulkan_device, const uint32_t* const code,
                           const size_t code_size_bytes, std::vector<uint32_t>& lowered) {
  const bool needed = !vulkan_device->properties().shaderInt64;
  if (!needed && !REXCVAR_GET(vulkan_force_int64_lowering)) return false;
  std::string why;
  const bool ok = spirv_int64::Lower(code, code_size_bytes / sizeof(uint32_t), lowered, &why);
  static std::atomic<uint32_t> lowered_count{0}, failed_count{0};
  if (ok) {
    const uint32_t count = ++lowered_count;
    if ((count & (count - 1)) == 0) {  // 1, 2, 4, 8, ...: a running total, not a flood
      REXLOG_INFO("vulkan: 64-bit integer fallback: {} shader modules lowered{}", count,
                  needed ? "" : " (forced by vulkan_force_int64_lowering)");
    }
  } else if (why != "no 64-bit integers") {
    const uint32_t count = ++failed_count;
    if (count <= 8 || (count & (count - 1)) == 0) {
      REXLOG_WARN("vulkan: 64-bit integer fallback could not lower a shader ({}){}", why,
                  needed ? "; it may fail to compile on this GPU" : "");
    }
  }
  return ok;
}

bool RewriteUnsupportedClipCullDistances(const VulkanDevice* const vulkan_device,
                                         const uint32_t* const code,
                                         const size_t code_size_bytes,
                                         std::vector<uint32_t>& rewritten) {
  constexpr uint32_t kMagic = 0x07230203;
  constexpr uint32_t kOpCapability = 17, kOpEntryPoint = 15, kOpTypeVector = 23,
                     kOpTypeMatrix = 24, kOpTypeArray = 28, kOpTypePointer = 32,
                     kOpConstant = 43, kOpVariable = 59, kOpDecorate = 71, kOpMemberDecorate = 72;
  constexpr uint32_t kCapabilityClipDistance = 32, kCapabilityCullDistance = 33;
  constexpr uint32_t kDecorationBuiltIn = 11, kDecorationLocation = 30;
  constexpr uint32_t kBuiltInClipDistance = 3, kBuiltInCullDistance = 4;
  constexpr uint32_t kStorageClassOutput = 3, kExecutionModelVertex = 0;

  const VulkanDevice::Properties& properties = vulkan_device->properties();
  const bool clip_supported = properties.shaderClipDistance;
  const bool cull_supported = properties.shaderCullDistance;
  const size_t word_count = code_size_bytes / sizeof(uint32_t);
  if ((clip_supported && cull_supported) || word_count < 5 || code[0] != kMagic) {
    return false;
  }
  auto unsupported_builtin = [&](uint32_t builtin) {
    return (builtin == kBuiltInClipDistance && !clip_supported) ||
           (builtin == kBuiltInCullDistance && !cull_supported);
  };
  auto unsupported_capability = [&](uint32_t capability) {
    return (capability == kCapabilityClipDistance && !clip_supported) ||
           (capability == kCapabilityCullDistance && !cull_supported);
  };

  struct Variable {
    uint32_t type;
    uint32_t storage_class;
  };
  std::unordered_map<uint32_t, std::vector<uint32_t>> types;  // id -> opcode, operands
  std::unordered_map<uint32_t, uint32_t> constants;
  std::unordered_map<uint32_t, Variable> variables;
  std::unordered_map<uint32_t, uint32_t> locations;
  std::vector<size_t> removed_capabilities;
  std::vector<size_t> builtin_decorations;  // word index of each OpDecorate to rewrite
  bool vertex_only = true;
  uint32_t highest_member_location = 0;
  bool has_member_location = false;
  for (size_t i = 5; i < word_count;) {
    const uint32_t opcode = code[i] & 0xFFFF;
    const uint32_t length = code[i] >> 16;
    if (!length || i + length > word_count) {
      return false;
    }
    const uint32_t* operands = code + i + 1;
    const uint32_t operand_count = length - 1;
    if (opcode == kOpCapability && operand_count >= 1 && unsupported_capability(operands[0])) {
      removed_capabilities.push_back(i);
    } else if (opcode == kOpEntryPoint && operand_count >= 1) {
      vertex_only = vertex_only && operands[0] == kExecutionModelVertex;
    } else if (opcode == kOpDecorate && operand_count >= 3 && operands[1] == kDecorationBuiltIn &&
               unsupported_builtin(operands[2])) {
      builtin_decorations.push_back(i);
    } else if (opcode == kOpMemberDecorate && operand_count >= 4 &&
               operands[2] == kDecorationBuiltIn && unsupported_builtin(operands[3])) {
      // A gl_PerVertex block member cannot become a located output in place.
      return false;
    } else if (opcode == kOpDecorate && operand_count >= 3 &&
               operands[1] == kDecorationLocation) {
      locations[operands[0]] = operands[2];
    } else if (opcode == kOpMemberDecorate && operand_count >= 4 &&
               operands[2] == kDecorationLocation) {
      highest_member_location = std::max(highest_member_location, operands[3]);
      has_member_location = true;
    } else if ((opcode == kOpTypeVector || opcode == kOpTypeMatrix || opcode == kOpTypeArray ||
                opcode == kOpTypePointer) &&
               operand_count >= 1) {
      types[operands[0]].assign(code + i, code + i + length);
    } else if (opcode == kOpConstant && operand_count >= 3) {
      constants[operands[1]] = operands[2];
    } else if (opcode == kOpVariable && operand_count >= 3) {
      variables[operands[1]] = {operands[0], operands[2]};
    }
    i += length;
  }
  if (removed_capabilities.empty() || builtin_decorations.empty() || !vertex_only) {
    return false;
  }

  // Locations a value of this type occupies (scalars and vectors up to 4
  // components take one; 64-bit vectors are not used by these outputs).
  std::function<uint32_t(uint32_t, uint32_t)> slots = [&](uint32_t type, uint32_t depth) {
    const auto it = types.find(type);
    if (it == types.end() || depth > 8) {
      return uint32_t(1);
    }
    const std::vector<uint32_t>& t = it->second;
    const uint32_t opcode = t[0] & 0xFFFF;
    if (opcode == kOpTypeArray && t.size() >= 4) {
      const auto length = constants.find(t[3]);
      return (length != constants.end() ? length->second : 1) * slots(t[2], depth + 1);
    }
    if (opcode == kOpTypeMatrix && t.size() >= 4) {
      return t[3];
    }
    return uint32_t(1);
  };
  auto variable_slots = [&](const Variable& variable) {
    const auto pointer = types.find(variable.type);
    if (pointer == types.end() || pointer->second.size() < 4) {
      return uint32_t(1);
    }
    return slots(pointer->second[3], 0);
  };

  uint32_t next_location = has_member_location ? highest_member_location + 1 : 0;
  for (const auto& [id, location] : locations) {
    const auto variable = variables.find(id);
    if (variable != variables.end() && variable->second.storage_class == kStorageClassOutput) {
      next_location = std::max(next_location, location + variable_slots(variable->second));
    }
  }

  static std::atomic<uint32_t> max_output_locations{0};
  if (!max_output_locations.load(std::memory_order_relaxed)) {
    VkPhysicalDeviceProperties device_properties{};
    vulkan_device->vulkan_instance()->functions().vkGetPhysicalDeviceProperties(
        vulkan_device->physical_device(), &device_properties);
    max_output_locations.store(std::max(device_properties.limits.maxVertexOutputComponents / 4, 1u),
                               std::memory_order_relaxed);
  }

  rewritten.assign(code, code + word_count);
  for (const size_t decoration : builtin_decorations) {
    const auto variable = variables.find(code[decoration + 1]);
    if (variable == variables.end() || variable->second.storage_class != kStorageClassOutput) {
      return false;
    }
    const uint32_t location = next_location;
    next_location += variable_slots(variable->second);
    if (next_location > max_output_locations.load(std::memory_order_relaxed)) {
      return false;
    }
    // OpDecorate %id BuiltIn ClipDistance -> OpDecorate %id Location N, same length.
    rewritten[decoration + 2] = kDecorationLocation;
    rewritten[decoration + 3] = location;
  }
  // Remove the capability declarations, last first so earlier indices stay valid.
  for (auto it = removed_capabilities.rbegin(); it != removed_capabilities.rend(); ++it) {
    rewritten.erase(rewritten.begin() + *it, rewritten.begin() + *it + (code[*it] >> 16));
  }
  return true;
}

}  // namespace util
}  // namespace vulkan
}  // namespace ui
}  // namespace rex
