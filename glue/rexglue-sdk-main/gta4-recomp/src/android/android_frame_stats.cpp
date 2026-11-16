#include "android/android_frame_stats.h"

#include <algorithm>
#include <array>
#include <atomic>
#include <ctime>

namespace gta4::android {
namespace {

// Frame intervals in microseconds. One writer (the title thread), readers on
// any thread: a reader may see a slot being overwritten, which only swaps one
// sample for a newer one.
std::array<std::atomic<uint32_t>, kFrameStatsWindow> g_intervals_us{};
std::atomic<uint32_t> g_written{0};  // total samples ever written
int64_t g_last_frame_ns = 0;          // title thread only

int64_t NowNs() noexcept {
  timespec ts{};
  clock_gettime(CLOCK_MONOTONIC, &ts);
  return int64_t(ts.tv_sec) * 1000000000 + ts.tv_nsec;
}

}  // namespace

void RecordTitleFrame() noexcept {
  const int64_t now = NowNs();
  const int64_t last = g_last_frame_ns;
  g_last_frame_ns = now;
  if (!last) return;
  const int64_t delta_us = (now - last) / 1000;
  // Gaps over 2 s are pauses (loading, app in background), not frames.
  if (delta_us <= 0 || delta_us > 2000000) return;
  const uint32_t index = g_written.load(std::memory_order_relaxed);
  g_intervals_us[index % kFrameStatsWindow].store(uint32_t(delta_us), std::memory_order_relaxed);
  g_written.store(index + 1, std::memory_order_release);
}

bool ComputeFrameStats(FrameStats* out) noexcept {
  if (!out) return false;
  const uint32_t written = g_written.load(std::memory_order_acquire);
  const uint32_t count = std::min(written, kFrameStatsWindow);
  if (count < 30) return false;
  // Static scratch: callers are the overlay (render thread) and the log line
  // (title thread), so guard it instead of putting 4 KiB on the stack twice.
  static std::array<uint32_t, kFrameStatsWindow> scratch;
  static std::atomic_flag busy = ATOMIC_FLAG_INIT;
  if (busy.test_and_set(std::memory_order_acquire)) return false;
  uint64_t sum = 0;
  for (uint32_t i = 0; i < count; ++i) {
    const uint32_t value =
        g_intervals_us[(written - 1 - i) % kFrameStatsWindow].load(std::memory_order_relaxed);
    scratch[i] = value;
    sum += value;
  }
  const auto percentile = [&](double fraction) {
    uint32_t rank = uint32_t(fraction * double(count - 1) + 0.5);
    rank = std::min(rank, count - 1);
    std::nth_element(scratch.begin(), scratch.begin() + rank, scratch.begin() + count);
    return scratch[rank];
  };
  const double average_us = double(sum) / double(count);
  uint32_t spikes = 0;
  for (uint32_t i = 0; i < count; ++i) {
    if (double(scratch[i]) > average_us * 2.0) ++spikes;
  }
  const uint32_t worst = *std::max_element(scratch.begin(), scratch.begin() + count);
  const uint32_t p99 = percentile(0.99);
  const uint32_t p999 = percentile(0.999);
  busy.clear(std::memory_order_release);

  out->frames = count;
  out->average_ms = float(average_us / 1000.0);
  out->p99_ms = p99 / 1000.0f;
  out->p999_ms = p999 / 1000.0f;
  out->worst_ms = worst / 1000.0f;
  out->spikes = spikes;
  return true;
}

}  // namespace gta4::android
