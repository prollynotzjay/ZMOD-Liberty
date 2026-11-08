// sub_828FD378(owner r3, out r4) copies the world matrix of the object at
// owner+56 into out, following object->[4]->[12] to a type check and a
// skeleton query; with no object it writes an identity matrix instead. The
// title frees such objects on another thread while this one still holds the
// owner, a race the console's timing hid: the faster renderer exposes it as
// a crash on an unmapped page inside this function. When the object's
// pointer chain no longer leads to mapped memory, take the title's own
// no-object path rather than fault.
#include <android/log.h>

#include <atomic>
#include <cstdint>

#include <rex/cvar.h>
#include <rex/runtime.h>

#include "gta4_init.h"

REXCVAR_DEFINE_BOOL(gta4_stale_object_guard, true, "GTA IV/Stability",
                    "Treat an object whose pointers lead to unmapped memory as absent in "
                    "sub_828FD378, sub_828FD208, sub_8297CE78 and sub_8242FFC0 instead of crashing");

namespace {

std::atomic<uint64_t> g_stale_objects{0};

// Recently confirmed readable 4 KB pages, valid while their heap's access
// epoch is unchanged (it reads 0 during a mutation and moves after it).
struct ReadablePage {
  const void* heap = nullptr;
  uint64_t epoch = 0;
  uint32_t page = UINT32_MAX;
};
thread_local ReadablePage t_readable_pages[16];
thread_local uint32_t t_readable_cursor = 0;

bool PageReadable(rex::memory::Memory* memory, uint32_t address) {
  auto* heap = memory->LookupHeap(address);
  if (!heap) return false;
  const uint64_t epoch = heap->access_epoch();
  const uint32_t page = address >> 12;
  for (const ReadablePage& cached : t_readable_pages) {
    if (cached.page == page && cached.heap == heap && cached.epoch == epoch && epoch) return true;
  }
  const uint32_t first = page << 12;
  using rex::memory::PageAccess;
  const auto access = heap->QueryRangeAccess(first, first + 0xFFF);
  const bool readable = access == PageAccess::kReadOnly || access == PageAccess::kReadWrite ||
                        access == PageAccess::kExecuteReadOnly ||
                        access == PageAccess::kExecuteReadWrite;
  if (readable && epoch) {
    t_readable_pages[t_readable_cursor++ % 16] = {heap, epoch, page};
  }
  return readable;
}

bool Readable(uint32_t address, uint32_t bytes) {
  if (!address || !bytes || uint64_t(address) + bytes > uint64_t(UINT32_MAX) + 1) return false;
  auto* runtime = rex::Runtime::instance();
  auto* memory = runtime ? runtime->memory() : nullptr;
  if (!memory) return false;
  const uint32_t end = uint32_t(uint64_t(address) + bytes - 1);
  if (!PageReadable(memory, address)) return false;
  return (end >> 12) == (address >> 12) || PageReadable(memory, end);
}

}  // namespace

// Both copy routines share one layout: owner+object_offset -> object (matrix
// at +16, link at +4), link+12 -> typed object (type byte at +4), owner+
// table_offset read for the skeleton query. Returns false (after writing the
// title's no-object identity) when that chain no longer leads to mapped
// memory; true when the original should run.
static bool GuardedMatrixCopy(PPCContext& ctx, uint8_t* base, uint32_t object_offset,
                       uint32_t table_offset, const char* name) {
  if (!REXCVAR_GET(gta4_stale_object_guard)) return true;
  const uint32_t owner = ctx.r3.u32;
  const uint32_t out = ctx.r4.u32;
  bool valid = Readable(owner + object_offset, 4) && Readable(owner + table_offset, 4) &&
               Readable(out, 64);
  const uint32_t object = valid ? REX_LOAD_U32(owner + object_offset) : 0;
  if (valid && object) {
    valid = Readable(object, 80);
    const uint32_t link = valid ? REX_LOAD_U32(object + 4) : 0;
    valid = valid && Readable(link + 12, 4);
    const uint32_t typed = valid ? REX_LOAD_U32(link + 12) : 0;
    valid = valid && Readable(typed + 4, 1);
  }
  if (valid) return true;
  const uint64_t count = g_stale_objects.fetch_add(1, std::memory_order_relaxed) + 1;
  if (count <= 8 || !(count % 1024)) {
    __android_log_print(ANDROID_LOG_WARN, "LibertyRecomp",
                        "stale-object-guard: #%llu %s owner=%08X object=%08X out=%08X",
                        static_cast<unsigned long long>(count), name, owner, object, out);
  }
  if (Readable(out, 64)) {
    // The title's no-object path: identity rotation, zero translation, with
    // its 1.0/0.0 constants read from the same addresses (lis -32256).
    const uint32_t one = REX_LOAD_U32(0x82000000u + 3400);
    const uint32_t zero = REX_LOAD_U32(0x82000000u + 2612);
    const uint32_t layout[9][2] = {{0, one},  {4, zero},  {8, zero},  {16, zero}, {20, one},
                                   {24, zero}, {32, zero}, {36, zero}, {40, one}};
    for (const auto& [offset, bits] : layout) REX_STORE_U32(out + offset, bits);
    for (uint32_t offset = 48; offset < 64; offset += 4) REX_STORE_U32(out + offset, 0);
  }
  return false;
}

// sub_8297CE78 walks an object's child table (object+48+648+i*4) and reads the
// child's words at +100 and +108 straight away: the same freed-object race, a
// crash with the game standing still (2026-10-09). The edit that
// tools/apply_generated_patches.py makes in the generated code asks here and,
// for a child that no longer leads to mapped memory, takes the title's
// empty-table path.
extern "C" bool GTA4_StaleChildGuard(uint32_t child) {
  if (!REXCVAR_GET(gta4_stale_object_guard) || Readable(child + 100, 12)) return true;
  const uint64_t count = g_stale_objects.fetch_add(1, std::memory_order_relaxed) + 1;
  if (count <= 8 || !(count % 1024)) {
    __android_log_print(ANDROID_LOG_WARN, "LibertyRecomp",
                        "stale-object-guard: #%llu sub_8297CE78 child=%08X",
                        static_cast<unsigned long long>(count), child);
  }
  return false;
}

#ifndef GTA4_PAL_SAFE_MODE_RETARGETED  // PAL-retargeted, see tools/pal_retarget_hooks.py
extern "C" void sub_828FD378(PPCContext& ctx, uint8_t* base) {
  if (GuardedMatrixCopy(ctx, base, 56, 112, "sub_828FD378")) __imp__sub_828FD378(ctx, base);
}
#endif  // GTA4_PAL_SAFE_MODE sub_8296E480

// Same routine for the object at owner+52 (table at owner+104).
#ifndef GTA4_PAL_SAFE_MODE_RETARGETED  // PAL-retargeted, see tools/pal_retarget_hooks.py
extern "C" void sub_828FD208(PPCContext& ctx, uint8_t* base) {
  if (GuardedMatrixCopy(ctx, base, 52, 104, "sub_828FD208")) __imp__sub_828FD208(ctx, base);
}
#endif  // GTA4_PAL_SAFE_MODE sub_8296E310

// sub_82430080 walks the title's global entity list every frame and calls
// sub_8242FFC0 for each entity's children (entity+652+i*4), the table
// sub_8297CE78 reads. A collision left small integers in it (child=00000B32,
// then 00000002, 2026-10-10): sub_8297CE78's guard took its empty path, and
// sub_8242FFC0 then faulted reading the child's +52. A child that does not
// lead to mapped memory is skipped; the next frame walks the table again.
#ifndef GTA4_PAL_SAFE_MODE_RETARGETED  // PAL-retargeted, see tools/pal_retarget_hooks.py
extern "C" void sub_8242FFC0(PPCContext& ctx, uint8_t* base) {
  const uint32_t child = ctx.r3.u32;
  if (!REXCVAR_GET(gta4_stale_object_guard) || Readable(child + 52, 8)) {
    __imp__sub_8242FFC0(ctx, base);
    return;
  }
  const uint64_t count = g_stale_objects.fetch_add(1, std::memory_order_relaxed) + 1;
  if (count <= 8 || !(count % 1024)) {
    __android_log_print(ANDROID_LOG_WARN, "LibertyRecomp",
                        "stale-object-guard: #%llu sub_8242FFC0 child=%08X",
                        static_cast<unsigned long long>(count), child);
  }
}
#endif  // GTA4_PAL_SAFE_MODE sub_82477E30
