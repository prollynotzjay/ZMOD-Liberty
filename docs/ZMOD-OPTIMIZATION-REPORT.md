# ZMOD Liberty: optimization report

Technical report for the low-end Mali optimization project (Phases 1-7).
Written from the code on the `mali-dimensity-8400` branch. No numbers in this
report were measured here: every performance claim below either comes from an
earlier on-device log or is marked as something to measure.

Targets: Mali-G57, G68, G610, G615, G710, G715, G720 (Valhall, Vulkan 1.1 to
1.3 drivers). Reference projects: andrewnakas/skate3-android,
Buku313/Skate3-Mobile, StevensND/nfsmw-nx.

---

## 1. Optimizations already in the code

| Area | What exists | Where |
|---|---|---|
| CPU clocks | Android Performance Hint session for up to 6 busy game threads, frame-time target 20-33 ms (launcher "CPU boost") | `gta4-recomp/src/android/android_performance_hint.cpp` |
| Thermals | Thermal guard: lowers the draw distance when Android forecasts throttling, restores it after cooling (`android_thermal_guard`) | `gta4-recomp/src/android/android_power.cpp` |
| Thread placement | Every 2 s the busiest threads are ranked by CPU time and each gets a big core, fastest first (`android_pin_hot_threads`) | `gta4-recomp/src/android/android_thread_pinning.cpp`, `gta4_app.cpp` |
| Busy-waits | Title's frame-slot spin replaced by a 250 µs sleep (`gta4_frame_wait_sleep`); kernel spinlock spin count tunable (`kernel_spinlock_spins`, launcher "Thread waiting") | `android_frame_wait_hook.cpp`, `src/kernel/xboxkrnl/xboxkrnl_threading.cpp` |
| GPU load | FSR 1 upscaling, 720p output cap, FXAA off, reflection AA off, small water-reflection objects skipped, shadow map 256 | `assets/default_args.txt`, `graphics_system.cpp` |
| CPU load | Population density scales, dynamic draw distance (min 0.80) | `gta4_app.cpp` |
| Mali textures | Mali has no BC (DXT) texture support: DXT is decoded on the CPU, split across cores by `NativeBcDecodePool` | `src/graphics/gta4_native/native_bc_decode.h`, `graphics_system.cpp` |
| Shader stutter | Vulkan pipeline cache saved every 30 s and on exit, loaded at start, prewarm on | `graphics_system.cpp` (`SaveNativePipelineCache`) |
| Shader compatibility | 64-bit integer lowering for GPUs without `shaderInt64`; clip-distance rewrite for GPUs without `shaderClipDistance` | `include/rex/ui/vulkan/spirv_int64_lowering.h`, `src/ui/vulkan/vulkan_util.cpp` |
| MSAA | 2x fallback when 4x is not supported | `graphics_system.cpp` |
| Frame pacing | 30 FPS limit with vsync on a 60 Hz panel, `gta4_fps_guard` | `default_args.txt`, `graphics_system.cpp` |
| Build | `LIBERTY_CPU` compatible / armv9 targets; PGO "generate" build available | `os/android/scripts/build_native.sh`, `android_pgo_dump.cpp` |
| Overlay | FPS, frame time, CPU % and clock, GPU %, memory, battery temperature | `android_perf_overlay.cpp` |

## 2. What is missing

1. **Frame-time distribution.** The overlay showed only an average FPS, which hides stutter. *(Done in this update: 1% / 0.1% lows, worst frame, spike count.)*
2. **Vulkan 1.1 drivers** were refused even when they offer every feature the renderer needs. *(Done in this update.)*
3. **Per-stage timing on device.** There is no cheap always-available split of a frame into game thread / command recording / GPU. The detailed CPU and GPU profilers exist (`gta4_profile_native_detailed_*`) but are too heavy to leave on.
4. **Device tiers.** All Mali GPUs get the same defaults; a G57 and a G720 need different resolution, density and shadow settings.
5. **Texture upload cost.** BC decode runs on the CPU; decoded textures are stored uncompressed (4x the memory of DXT1). Mali supports ASTC and ETC2, which could hold the decoded data compressed.
6. **Stutter from first-time pipelines** is only covered after a pipeline has been seen once (cache). Nothing is compiled ahead of time for a fresh install.
7. **Memory budget.** No use of `VK_EXT_memory_budget` to lower texture residency on 4-6 GB phones.

## 3. Techniques from the reference projects that apply

| Technique | From | Applies here? |
|---|---|---|
| Device profiles (a low "Performance" profile at reduced scene resolution and 0.5x world range, and a "Quality" one) | Skate3-Mobile (RG406V, Mali-G57) | Yes: the same idea as a G57/G68 tier vs a G710+ tier. Settings already exist; only the presets are missing. |
| Not refusing Mali for missing optional features (`vertexPipelineStoresAndAtomics`) | skate3-android | Already done here for `shaderInt64` and `shaderClipDistance`; Vulkan 1.1 is the same idea. |
| A locked 30 FPS keeps the GPU at low clocks and lets the thermal clamp release; lowering work per frame did not stop throttling | skate3-android (S23 FE measurements) | Yes: supports keeping the 30 FPS cap with vsync as the default, and measuring sustained runs, not short ones. |
| Watch the distribution (frames over 33.3 and 50 ms), not the average | nfsmw-nx `docs/measuring.md` | Yes: Phase 1 of this update. |
| Replace the game's own busy-waits with real waits | nfsmw-nx | Already done (frame wait hook). Check for others with a profile. |
| No logging from the command-recording thread | nfsmw-nx | Worth checking: Android logs from hot paths cost CPU. |
| LTO + PGO + function ordering for the recompiled code (~+4 FPS in their case) | nfsmw-nx | Yes: PGO "generate" exists here but no profile is shipped. Highest expected CPU gain for every GPU. |
| Native C++ replacements for the hottest game functions, each behind a check against the original | nfsmw-nx | Later phase; needs a profile first. |
| Custom Turnip drivers through libadrenotools | both Skate 3 ports | Adreno only, already present (`DriverBridge`). Not for Mali. |

## 4. Compatibility problems found

- **Vulkan 1.1 Mali drivers** (older G57/G68 firmware): the renderer required 1.2. Some of its own shaders were SPIR-V 1.5/1.6, which a 1.1 driver cannot load. Fixed in this update (section 7).
- **Missing `shaderInt64`** (several Mali GPUs): handled by the 64-bit lowering pass.
- **No BC textures on Mali:** CPU decode; costs CPU time and memory (section 2, item 5).
- **No `shaderClipDistance` on Mali:** clip planes are dropped, so some reflections and cut geometry look wrong.
- **Separate render queue with timeline semaphores** is only used on Vulkan 1.2+; 1.1 devices use one queue (slower but correct).
- **Thread pinning** must never hard-pin to fixed core numbers: core layouts differ (Dimensity 8400: 8 big cores; G57 SoCs: 2+6). The existing code picks the fastest cores at run time and keeps it that way.

## 5. Recommended order

1. **Phase 1 - measure (done here):** 1%/0.1% lows in overlay and log. Ask testers for a 2-minute city drive log on each target GPU.
2. **Device tiers:** detect the GPU name at launch (already reported by the driver probe) and pick default presets for low / mid / high Mali. Settings only, no new code paths.
3. **PGO build:** record a profile on one Mali phone with the existing "generate" build, ship the optimized libmain. Benefits every device.
4. **Texture path:** decoded DXT re-encoded to ETC2 / ASTC (or kept as BC on GPUs that support it) to cut memory and upload bandwidth; measure first-time stutter before and after with the new lows.
5. **Memory budget:** use `VK_EXT_memory_budget` to scale texture residency on low-RAM phones.
6. **Hot-function replacements** chosen from a profile (nfsmw-nx approach), each with a check against the recompiled original.

Each step should be its own commit and be compared with the Phase 1 numbers.

## 6. Exact files for the next steps

| Step | Files |
|---|---|
| Device tiers | `os/android/app/src/main/java/com/libertyrecomp/LauncherActivity.java` (presets), `DriverBridge.java` (GPU name), `assets/default_args.txt` |
| PGO | `os/android/scripts/build_native.sh`, `gta4-recomp/CMakeLists.txt` (`LIBERTY_ANDROID_PGO`), `gta4-recomp/src/android/android_pgo_dump.cpp` |
| Texture path | `src/graphics/gta4_native/native_bc_decode.h`, `graphics_system.cpp` (texture upload and `NativeBcDecodePool` callers) |
| Memory budget | `src/ui/vulkan/vulkan_device.cpp` (`EXT_memory_budget` is already enabled), `src/ui/vulkan/vulkan_mem_alloc.cpp`, `graphics_system.cpp` |
| Measurement | `gta4-recomp/src/android/android_frame_stats.*`, `android_perf_overlay.cpp`, `android_frame_wait_hook.cpp` |

---

## 7. What this update changed

Three commits, each on its own:

1. **Vulkan 1.1 support** - `src/ui/vulkan/vulkan_device.cpp`: minimum is now Vulkan 1.1. On a 1.1 driver the Vulkan 1.2 features are enabled from their extensions (`VK_KHR_buffer_device_address`, `VK_EXT_descriptor_indexing`, `VK_KHR_shader_float16_int8`, and `VK_KHR_depth_stencil_resolve` + `VK_KHR_create_renderpass2` for dynamic rendering); `vkGetBufferDeviceAddress` is loaded from its KHR name. `include/rex/ui/vulkan/spirv_version_downgrade.h` rewrites the renderer's SPIR-V 1.4-1.6 shaders as SPIR-V 1.3 when the device is 1.1 (all 9 such shaders pass `spirv-val --target-env vulkan1.1`; the game's own shaders are SPIR-V 1.0 already). The driver probe (`os/android/native/driver_proxy.cpp`) reads the 1.1 extension features and the launcher accepts 1.1. A 1.1 driver that lacks one of those extensions is still refused with a message naming what is missing.
2. **Rename to ZMOD Liberty** - app name, new logo and launcher icon (scripts in `tools/zmod/`), installer, error dialog and crash report titles. Data folders and package name are unchanged, so updating keeps saves and settings.
3. **Phase 1 diagnostics** - `android_frame_stats.*`: lock-free, allocation-free ring of the last 1024 frame intervals; overlay line `LOW 1% / 0.1%` and `MAX` (launcher: Overlay > "1% / 0.1% lows"); the 2-second `title-fps` log line now includes avg, lows, worst frame and spikes.

### How to build and test

- Build as before (GitHub Actions or `os/android/scripts/build_native.sh` + Gradle). No new dependencies.
- **Vulkan 1.1:** on a 1.1 Mali phone the log shows `Vulkan 1.1 device '...': VK_KHR_buffer_device_address=true ...` and `SPIR-V 1.x shader rewritten as SPIR-V 1.3`. On 1.2+ phones nothing changes (the rewrite never runs).
- **Lows:** enable Overlay > "1% / 0.1% lows", drive the same route for 2 minutes before and after a change, and compare the `title-fps` log lines.
- Not tested on a real Vulkan 1.1 Mali device yet. Reports from G57/G68 owners on older firmware are needed.

---

## 8. Phase 2 (CPU): findings and changes

### What the investigation found

| Phase 2 item | State before this update |
|---|---|
| Compiler settings | Already strong: `-O3` for the recompiled game, ThinLTO, `-Bsymbolic-functions` (no PLT between game functions), hot-first symbol ordering, ARMv8.2 with inline LSE atomics and native TLS (`gta4-recomp/CMakeLists.txt`, `os/android/scripts/build_native.sh`). |
| PGO | Wired up in CMake, but the recording went to a private folder that needs a PC (`adb run-as`) and the GitHub build had no way to use a profile. Never shipped. |
| Direct calls / indirect calls | `tools/direct_calls.py` was measured upstream: no gain at the time, and its first build crashed. Left off. |
| Busy-waits | Frame-slot wait, guest spinlocks and the UI loop already sleep or back off. The guest **critical section** spin still hammered the lock with compare-and-swap and had no CPU hint. |
| Thread placement | Already adaptive (busiest threads to the fastest cores, re-ranked every 2 s); no fixed core numbers. Not changed. |
| Allocation overhead | The renderer's command path is pooled and recycled (upstream 0.5). `XObject::WaitMultiple` still allocates a small vector per wait; not changed (cross-platform API, unmeasured cost). |

### Changes (two commits)

1. **Critical sections** (`src/kernel/xboxkrnl/xboxkrnl_rtl.cpp`): read-only spinning with an ARM `yield` hint, optional longer spin before sleeping (`kernel_critical_section_spins`, launcher "Lock waiting"), and per-thread counters in the 5-second `thermal:` log line (`name=yields/spins/cs-contended/cs-slept`). Default behaviour is the game's own spin count.
2. **PGO pipeline**: record on the phone, collect from Download/ZMOD-PGO, upload to `os/android/pgo/`, build with `pgo: use`. Steps in `os/android/pgo/README.md`.

### How to measure

- **Lock waiting:** same route, 2 minutes each at Default / Medium / Long. Compare the `title-fps` lows and the `cs-slept` counts. Keep the setting only if the 1% low improves without higher CPU temperature.
- **PGO:** normal APK vs `-pgo` APK on the same route; compare average FPS and 1% lows.

### Not yet done in Phase 2

- PGO for `librexruntime.so` (kernel, memory, threads): only the game and the renderer are profiled now.
- Hot-function work in the recompiled code needs a CPU profile from a phone first (simpleperf); the PGO recording can also show which functions are hottest.
