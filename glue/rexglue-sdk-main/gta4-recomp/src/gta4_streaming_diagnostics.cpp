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

// Retail sub_821A8060 applies platform:/stream.ini and stores the capped
// manager limits in these two fields. The absolute addresses were derived from
// the generated PPC using the repository-required Python arithmetic workflow.
constexpr uint32_t kStreamingVirtualLimit = 0x82A2EED4;
constexpr uint32_t kStreamingPhysicalLimit = 0x82A2EEE0;

// Retail sub_827DB938 stores the optional [RAGE] DiskCache worker here. A null
// value after initialization proves that the cache-copy worker was not created.
constexpr uint32_t kDiskCacheWorker = 0x830F5490;

}  // namespace

#ifndef GTA4_PAL_SAFE_MODE_RETARGETED  // PAL-retargeted, see tools/pal_retarget_hooks.py
extern "C" void sub_821A8060(PPCContext& ctx, uint8_t* base) {
  gta4::streaming::Initialize(base);
  __imp__sub_821A8060(ctx, base);
  REXLOG_INFO(
      "gta4-streaming: configured limits virtual={} physical={} source=platform:/stream.ini",
      REX_LOAD_U32(kStreamingVirtualLimit), REX_LOAD_U32(kStreamingPhysicalLimit));
}
#endif  // GTA4_PAL_SAFE_MODE sub_821CFD10

#ifndef GTA4_PAL_SAFE_MODE_RETARGETED  // PAL-retargeted, see tools/pal_retarget_hooks.py
extern "C" void sub_827DB938(PPCContext& ctx, uint8_t* base) {
  __imp__sub_827DB938(ctx, base);
  REXLOG_INFO("gta4-streaming: disk-cache init result={} worker={:08X} active={}", ctx.r3.u32,
              REX_LOAD_U32(kDiskCacheWorker), REX_LOAD_U32(kDiskCacheWorker) != 0);
}
#endif  // GTA4_PAL_SAFE_MODE sub_8284DAD8
