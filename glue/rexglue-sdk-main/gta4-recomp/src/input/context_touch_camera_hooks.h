#pragma once

#include <cstdint>
#include <limits>

namespace gta4::input {

// These two calls in generated sub_824F8D10 occur after its FPS weapon
// camera, zoom range and camera-state checks. Other signed action decoders
// must retain their original behavior.
constexpr uint32_t TouchScopedZoomActionForCaller(uint32_t caller) noexcept {
  if (caller == 0x824F8F80) return 26;
  if (caller == 0x824F8FA4) return 24;
  return std::numeric_limits<uint32_t>::max();
}

}  // namespace gta4::input
