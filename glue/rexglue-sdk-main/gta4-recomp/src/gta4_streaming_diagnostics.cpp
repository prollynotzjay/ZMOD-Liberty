/**
 ******************************************************************************
 * @file        gta4_streaming_diagnostics.cpp
 * @brief       Evidence-only diagnostics for GTA IV streaming budgets/cache.
 ******************************************************************************
 */

#include <cstdint>

#include <rex/logging.h>

#include "gta4_init.h"
#include "gta4_streaming_hooks.h"

namespace {

// Retail sub_821CFD10 applies platform:/stream.ini and stores the capped
// manager limits in these two fields. The absolute addresses were derived from
// the generated PPC using the repository-required Python arithmetic workflow.
constexpr uint32_t kStreamingVirtualLimit = 0x82A9AA9C;
constexpr uint32_t kStreamingPhysicalLimit = 0x82A9AAA8;

// Retail sub_8284DAD8 stores the optional [RAGE] DiskCache worker here. A null
// value after initialization proves that the cache-copy worker was not created.
constexpr uint32_t kDiskCacheWorker = 0x831AB5D8;

}  // namespace

#ifndef GTA4_PAL_SAFE_MODE  // USA address, see tools/pal_guard_hooks.py
extern "C" void sub_821CFD10(PPCContext& ctx, uint8_t* base) {
  gta4::streaming::Initialize(base);
  __imp__sub_821CFD10(ctx, base);
  REXLOG_INFO(
      "gta4-streaming: configured limits virtual={} physical={} source=platform:/stream.ini",
      REX_LOAD_U32(kStreamingVirtualLimit), REX_LOAD_U32(kStreamingPhysicalLimit));
}
#endif  // GTA4_PAL_SAFE_MODE sub_821CFD10

#ifndef GTA4_PAL_SAFE_MODE  // USA address, see tools/pal_guard_hooks.py
extern "C" void sub_8284DAD8(PPCContext& ctx, uint8_t* base) {
  __imp__sub_8284DAD8(ctx, base);
  REXLOG_INFO("gta4-streaming: disk-cache init result={} worker={:08X} active={}", ctx.r3.u32,
              REX_LOAD_U32(kDiskCacheWorker), REX_LOAD_U32(kDiskCacheWorker) != 0);
}
#endif  // GTA4_PAL_SAFE_MODE sub_8284DAD8
