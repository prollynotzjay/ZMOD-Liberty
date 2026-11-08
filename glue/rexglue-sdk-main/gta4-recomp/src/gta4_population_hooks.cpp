#include "gta4_population_policy.h"

#include <bit>
#include <cstdint>
#include <string_view>

#include <rex/cvar.h>
#include <rex/diagnostics/policy.h>
#include <rex/logging.h>

#include "gta4_init.h"

REXCVAR_DEFINE_DOUBLE(gta4_traffic_density_scale, 1.25, "GTA IV/Population",
                      "Scale GTA IV's requested ambient traffic density")
    .range(0.0, 4.0)
    .lifecycle(rex::cvar::Lifecycle::kRequiresRestart);
REXCVAR_DEFINE_DOUBLE(gta4_parked_car_density_scale, 1.25, "GTA IV/Population",
                      "Scale GTA IV's requested parked-car density")
    .range(0.0, 4.0)
    .lifecycle(rex::cvar::Lifecycle::kRequiresRestart);
REXCVAR_DEFINE_DOUBLE(gta4_ped_density_scale, 1.25, "GTA IV/Population",
                      "Scale GTA IV's requested ambient pedestrian density")
    .range(0.0, 4.0)
    .lifecycle(rex::cvar::Lifecycle::kRequiresRestart);
REXCVAR_DEFINE_DOUBLE(gta4_scenario_ped_density_scale, 1.25, "GTA IV/Population",
                      "Scale GTA IV's requested scenario-pedestrian density")
    .range(0.0, 4.0)
    .lifecycle(rex::cvar::Lifecycle::kRequiresRestart);

namespace {

// These are the canonical population multiplier globals written by the
// generated setters and consumed by GTA IV's ambient vehicle/ped generators.
constexpr uint32_t kRandomCarDensity = 0x82A2FC30;
constexpr uint32_t kParkedCarDensity = 0x82A2FC34;
constexpr uint32_t kPedDensity = 0x82A30E74;
constexpr uint32_t kScenarioPedDensityCurrent = 0x82A30E78;
constexpr uint32_t kScenarioPedDensityNext = 0x82A30E7C;

float LoadGuestFloat(uint8_t* base, uint32_t address) {
  return std::bit_cast<float>(REX_LOAD_U32(address));
}

void StoreGuestFloat(uint8_t* base, uint32_t address, float value) {
  REX_STORE_U32(address, std::bit_cast<uint32_t>(value));
}

bool PopulationDiagnosticsEnabled() {
  return rex::diagnostics::IsEnabled(rex::diagnostics::Category::kGuestHooks) &&
         rex::diagnostics::IsEnabled(rex::diagnostics::Category::kLogging);
}

void ScaleGuestMultiplier(uint8_t* base, uint32_t address,
                          double configured_scale,
                          std::string_view source, std::string_view channel) {
  const float requested = LoadGuestFloat(base, address);
  const float effective =
      gta4::population::ScaleMultiplier(requested, configured_scale);
  if (std::bit_cast<uint32_t>(effective) != std::bit_cast<uint32_t>(requested)) {
    StoreGuestFloat(base, address, effective);
  }
  if (PopulationDiagnosticsEnabled()) {
    REXLOG_INFO(
        "gta4-population: source={} channel={} requested={} scale={} effective={}",
        source, channel, requested, configured_scale, effective);
  }
}

void ScaleTraffic(uint8_t* base, std::string_view source) {
  ScaleGuestMultiplier(base, kRandomCarDensity,
                       REXCVAR_GET(gta4_traffic_density_scale), source,
                       "traffic");
}

void ScaleParkedCars(uint8_t* base, std::string_view source) {
  ScaleGuestMultiplier(base, kParkedCarDensity,
                       REXCVAR_GET(gta4_parked_car_density_scale), source,
                       "parked-cars");
}

void ScalePeds(uint8_t* base, std::string_view source) {
  ScaleGuestMultiplier(base, kPedDensity,
                       REXCVAR_GET(gta4_ped_density_scale), source, "peds");
}

void ScaleScenarioPeds(uint8_t* base, std::string_view source) {
  const double scale = REXCVAR_GET(gta4_scenario_ped_density_scale);
  ScaleGuestMultiplier(base, kScenarioPedDensityCurrent, scale, source,
                       "scenario-peds-current");
  ScaleGuestMultiplier(base, kScenarioPedDensityNext, scale, source,
                       "scenario-peds-next");
}

}  // namespace

// Script/native handler: set both random and parked vehicle multipliers.
#ifndef GTA4_PAL_SAFE_MODE_RETARGETED  // PAL-retargeted, see tools/pal_retarget_hooks.py
extern "C" void sub_8255E240(PPCContext& ctx, uint8_t* base) {
  __imp__sub_8255E240(ctx, base);
  ScaleTraffic(base, "sub_8255E240");
  ScaleParkedCars(base, "sub_8255E240");
}
#endif  // GTA4_PAL_SAFE_MODE sub_82598EB0

// Script/native handler: set the random vehicle multiplier.
#ifndef GTA4_PAL_SAFE_MODE_RETARGETED  // PAL-retargeted, see tools/pal_retarget_hooks.py
extern "C" void sub_8255E260(PPCContext& ctx, uint8_t* base) {
  __imp__sub_8255E260(ctx, base);
  ScaleTraffic(base, "sub_8255E260");
}
#endif  // GTA4_PAL_SAFE_MODE sub_82598ED0

// Script/native handler: set the parked vehicle multiplier.
#ifndef GTA4_PAL_SAFE_MODE_RETARGETED  // PAL-retargeted, see tools/pal_retarget_hooks.py
extern "C" void sub_8255E278(PPCContext& ctx, uint8_t* base) {
  __imp__sub_8255E278(ctx, base);
  ScaleParkedCars(base, "sub_8255E278");
}
#endif  // GTA4_PAL_SAFE_MODE sub_82598EE8

// Canonical lower-level ambient pedestrian multiplier setter.
#ifndef GTA4_PAL_SAFE_MODE  // USA address, see tools/pal_guard_hooks.py
extern "C" void sub_823F2AB0(PPCContext& ctx, uint8_t* base) {
  __imp__sub_823F2AB0(ctx, base);
  ScalePeds(base, "sub_823F2AB0");
}
#endif  // GTA4_PAL_SAFE_MODE sub_823F2AB0

// Canonical lower-level current/next scenario pedestrian multiplier setter.
#ifndef GTA4_PAL_SAFE_MODE  // USA address, see tools/pal_guard_hooks.py
extern "C" void sub_823F2AC0(PPCContext& ctx, uint8_t* base) {
  __imp__sub_823F2AC0(ctx, base);
  ScaleScenarioPeds(base, "sub_823F2AC0");
}
#endif  // GTA4_PAL_SAFE_MODE sub_823F2AC0

// Vehicle population startup reset writes the globals directly.
#ifndef GTA4_PAL_SAFE_MODE_RETARGETED  // PAL-retargeted, see tools/pal_retarget_hooks.py
extern "C" void sub_8232A278(PPCContext& ctx, uint8_t* base) {
  __imp__sub_8232A278(ctx, base);
  ScaleTraffic(base, "sub_8232A278");
  ScaleParkedCars(base, "sub_8232A278");
}
#endif  // GTA4_PAL_SAFE_MODE sub_823A5330

// Pedestrian population startup reset writes all three globals directly.
#ifndef GTA4_PAL_SAFE_MODE  // USA address, see tools/pal_guard_hooks.py
extern "C" void sub_823F4860(PPCContext& ctx, uint8_t* base) {
  __imp__sub_823F4860(ctx, base);
  ScalePeds(base, "sub_823F4860");
  ScaleScenarioPeds(base, "sub_823F4860");
}
#endif  // GTA4_PAL_SAFE_MODE sub_823F4860
