#pragma once
// ZMOD Liberty: Vulkan 1.1 support.
//
// Vulkan 1.1 drivers accept SPIR-V 1.0-1.3 only. A few of the renderer's own
// shaders were built for Vulkan 1.2/1.3 (SPIR-V 1.5/1.6) but use nothing that
// SPIR-V 1.3 cannot express. This rewrites such a module as SPIR-V 1.3:
//   - OpEntryPoint interface lists keep only Input/Output variables (1.4+
//     lists every global the entry point uses);
//   - SPV_KHR_physical_storage_buffer is declared again when the module uses
//     PhysicalStorageBufferAddresses (core in 1.5, provided on 1.1 by
//     VK_KHR_buffer_device_address);
//   - OpTerminateInvocation (1.6) becomes OpKill;
//   - NonWritable on Function/Private variables (allowed from 1.4) is dropped
//     (it is only an optimization hint there).
// Modules that use instructions with no SPIR-V 1.3 form are rejected, and the
// caller then passes the original module to the driver unchanged.

#include <cstddef>
#include <cstdint>
#include <cstring>
#include <string>
#include <unordered_map>
#include <vector>

namespace rex::ui::vulkan::spirv_version {

inline bool DowngradeTo13(const uint32_t* code, size_t word_count, std::vector<uint32_t>& out,
                          std::string* why = nullptr) {
  constexpr uint32_t kMagic = 0x07230203u;
  constexpr uint32_t kVersion13 = 0x00010300u;
  constexpr uint16_t kOpExtension = 10, kOpCapability = 17, kOpEntryPoint = 15,
                     kOpVariable = 59, kOpDecorate = 71, kOpKill = 252,
                     kOpTerminateInvocation = 4416;
  constexpr uint32_t kCapabilityPhysicalStorageBufferAddresses = 5347;
  constexpr uint32_t kDecorationNonWritable = 24;
  constexpr uint32_t kStorageInput = 1, kStorageOutput = 3, kStoragePrivate = 6,
                     kStorageFunction = 7;
  const auto fail = [&](const char* reason) {
    if (why) *why = reason;
    return false;
  };
  if (!code || word_count < 5 || code[0] != kMagic) return fail("not SPIR-V");
  if (code[1] <= kVersion13) return fail("already SPIR-V 1.3 or older");

  std::unordered_map<uint32_t, uint32_t> storage;
  bool uses_psb = false;
  bool declares_psb = false;
  static constexpr char kPsbName[] = "SPV_KHR_physical_storage_buffer";
  for (size_t i = 5; i < word_count;) {
    const uint32_t count = code[i] >> 16;
    const uint16_t op = uint16_t(code[i] & 0xffffu);
    if (!count || i + count > word_count) return fail("malformed instruction");
    switch (op) {
      case kOpVariable:
        if (count >= 4) storage[code[i + 2]] = code[i + 3];
        break;
      case kOpCapability:
        if (count >= 2 && code[i + 1] == kCapabilityPhysicalStorageBufferAddresses)
          uses_psb = true;
        break;
      case kOpExtension:
        if ((count - 1) * 4 >= sizeof(kPsbName) &&
            std::memcmp(code + i + 1, kPsbName, sizeof(kPsbName)) == 0)
          declares_psb = true;
        break;
      case 331:  // OpExecutionModeId (1.2)
      case 332:  // OpDecorateId (1.2)
      case 400:  // OpCopyLogical (1.4)
      case 401:  // OpPtrEqual (1.4)
      case 402:  // OpPtrNotEqual (1.4)
      case 403:  // OpPtrDiff (1.4)
        return fail("instruction needs SPIR-V 1.4+");
      default:
        break;
    }
    i += count;
  }

  out.clear();
  out.reserve(word_count + 12);
  out.insert(out.end(), code, code + 5);
  out[1] = kVersion13;
  bool extension_placed = !uses_psb || declares_psb;
  for (size_t i = 5; i < word_count;) {
    const uint32_t count = code[i] >> 16;
    const uint16_t op = uint16_t(code[i] & 0xffffu);
    const uint32_t* inst = code + i;
    i += count;
    // Extensions go right after the capabilities (logical layout section 2).
    if (!extension_placed && op != kOpCapability) {
      std::vector<uint32_t> name((sizeof(kPsbName) + 3) / 4, 0);
      std::memcpy(name.data(), kPsbName, sizeof(kPsbName));
      out.push_back(uint32_t((1 + name.size()) << 16) | kOpExtension);
      out.insert(out.end(), name.begin(), name.end());
      extension_placed = true;
    }
    if (op == kOpEntryPoint) {
      // execution model, function id, literal name (nul-terminated), ids...
      size_t j = 3;
      for (; j < count; ++j) {
        const uint32_t word = inst[j];
        if (!(word & 0xffu) || !(word & 0xff00u) || !(word & 0xff0000u) || !(word & 0xff000000u)) {
          ++j;
          break;
        }
      }
      const size_t start = out.size();
      out.insert(out.end(), inst, inst + j);
      for (size_t k = j; k < count; ++k) {
        const auto it = storage.find(inst[k]);
        if (it != storage.end() && (it->second == kStorageInput || it->second == kStorageOutput))
          out.push_back(inst[k]);
      }
      out[start] = uint32_t((out.size() - start) << 16) | kOpEntryPoint;
      continue;
    }
    if (op == kOpDecorate && count >= 3 && inst[2] == kDecorationNonWritable) {
      const auto it = storage.find(inst[1]);
      if (it != storage.end() &&
          (it->second == kStorageFunction || it->second == kStoragePrivate))
        continue;
    }
    if (op == kOpTerminateInvocation) {
      out.push_back((1u << 16) | kOpKill);
      continue;
    }
    out.insert(out.end(), inst, inst + count);
  }
  return true;
}

}  // namespace rex::ui::vulkan::spirv_version
