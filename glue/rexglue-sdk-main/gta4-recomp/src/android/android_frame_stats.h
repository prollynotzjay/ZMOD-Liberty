#pragma once
// ZMOD Liberty, Phase 1 (diagnostics): frame-time history for the overlay and
// the log. The title thread records the interval between game frames; any
// thread can read percentiles from it. No allocation and no locks: a
// fixed ring of atomics written by one thread.

#include <cstdint>

namespace gta4::android {

// Call from the title thread once per new game frame (frame-wait hook).
void RecordTitleFrame() noexcept;

struct FrameStats {
  uint32_t frames = 0;  // samples in the window (up to kFrameStatsWindow)
  float average_ms = 0.0f;
  float p99_ms = 0.0f;    // 99th percentile frame time -> "1% low" FPS
  float p999_ms = 0.0f;   // 99.9th percentile frame time -> "0.1% low" FPS
  float worst_ms = 0.0f;  // longest frame in the window
  uint32_t spikes = 0;    // frames longer than twice the average
};

// Number of most recent frames the statistics cover (about 34 s at 30 FPS).
constexpr uint32_t kFrameStatsWindow = 1024;

// Fills `out` from the most recent frames. Returns false when there are not
// enough frames yet (fewer than 30). Cheap enough for twice a second.
bool ComputeFrameStats(FrameStats* out) noexcept;

}  // namespace gta4::android
