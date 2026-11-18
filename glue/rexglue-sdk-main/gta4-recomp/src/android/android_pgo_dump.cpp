// Profile-guided optimization, recording build only (LIBERTY_ANDROID_PGO=generate).
// Android never runs atexit for an app process, so the counters are written
// from a background thread every minute; each write replaces the file with
// the cumulative counters of this process. The .profraw files land in
// Download/ZMOD-PGO (or Android/data/com.libertyrecomp/files/pgo); see
// os/android/pgo/README.md.
#if defined(LIBERTY_PGO_GENERATE)

#include <android/log.h>
#include <sys/stat.h>
#include <unistd.h>

#include <chrono>
#include <cstdlib>
#include <string>
#include <thread>

extern "C" int __llvm_profile_write_file(void);
extern "C" void __llvm_profile_set_filename(const char*);

namespace {

struct PgoDumper {
  PgoDumper() {
    std::thread([] {
      // ZMOD Liberty: write where a player can pick the files up with any file
      // manager: Download/ZMOD-PGO when the app has "All files access" (it asks
      // for it to install the game), else Android/data/com.libertyrecomp/
      // files/pgo (HOME, set by LibertyActivity before this first write a
      // minute from now), else the private files folder.
      std::this_thread::sleep_for(std::chrono::seconds(60));
      std::string directory = "/storage/emulated/0/Download/ZMOD-PGO";
      mkdir(directory.c_str(), 0775);
      if (access(directory.c_str(), W_OK) != 0) {
        const char* home = std::getenv("HOME");
        directory = home && *home ? std::string(home) + "/pgo"
                                  : std::string("/data/data/com.libertyrecomp/files/pgo");
        mkdir(directory.c_str(), 0700);
      }
      static std::string pattern = directory + "/libmain-%p.profraw";
      __llvm_profile_set_filename(pattern.c_str());
      __android_log_print(ANDROID_LOG_WARN, "LibertyRecomp", "pgo: writing %s", pattern.c_str());
      for (bool first = true;; first = false) {
        if (!first) std::this_thread::sleep_for(std::chrono::seconds(60));
        const int result = __llvm_profile_write_file();
        __android_log_print(ANDROID_LOG_WARN, "LibertyRecomp", "pgo: profile written (%d)", result);
      }
    }).detach();
  }
};

PgoDumper pgo_dumper;

}  // namespace

#endif
