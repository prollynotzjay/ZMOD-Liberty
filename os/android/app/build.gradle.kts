// LibertyRecomp Android — :app module.
//
// Gradle never runs CMake. The native side (libmain.so, librexruntime.so,
// the GPU plugins, libSDL3.so, libc++_shared.so) is millions of lines of
// recompiled PowerPC and is built by os/android/scripts/build_native.sh,
// which stages the libraries into src/main/jniLibs and the title resources
// into src/main/assets/Resources. This module only packages them.
//
// The SDL Java classes come from the same SDL3 tree the native library is
// built from: SDLActivity refuses to start when the versions differ.

plugins {
    id("com.android.application")
}

val sdlJavaDir = rootProject.file(
    "../../glue/rexglue-sdk-main/thirdparty/sdl3/android-project/app/src/main/java")

// GPU family this APK is built for: -PlibertyGpu=adreno (default) or =mali.
// "mali" makes the device's own Vulkan driver the default instead of the
// bundled Mesa Turnip (which only exists for Adreno), drops the Adreno-only
// TU_DEBUG setting, and tags the version name with "-mali". Everything else is
// identical, so an Adreno and a Mali APK differ only in first-launch defaults;
// the player can still switch drivers on the launcher either way.
val libertyGpu = (project.findProperty("libertyGpu") as String? ?: "adreno").lowercase()
require(libertyGpu == "adreno" || libertyGpu == "mali") {
    "-PlibertyGpu must be 'adreno' or 'mali', got '$libertyGpu'"
}

android {
    namespace   = "com.libertyrecomp"
    compileSdk  = 35
    ndkVersion  = "29.0.14206865"

    // One fixed key for every build (Mali Edition alpha 1.4 and later), so a
    // new APK installs over the previous one as an update. GitHub's build
    // machines would otherwise sign each build with a new random debug key.
    signingConfigs {
        getByName("debug") {
            storeFile     = file("liberty-mali.keystore")
            storePassword = "android"
            keyAlias      = "liberty-mali"
            keyPassword   = "android"
        }
    }

    buildFeatures {
        buildConfig = true
    }

    defaultConfig {
        applicationId = "com.libertyrecomp"
        // 28: ASharedMemory (26) for guest memory and AAudio (27) for audio.
        minSdk        = 29
        targetSdk     = 35
        // Higher than every earlier build (upstream 0.5.9.3 and Mali alpha 1.4 are 18),
        // so it installs as an update over either.
        versionCode   = 19
        // Shown as e.g. 0.5.9.3-mali-alpha-1.5. The workflow reads both the
        // base version and versionSuffix to name the APK.
        val versionSuffix = "-alpha-1.5"
        versionName   = "0.5.9.3" + (if (libertyGpu == "mali") "-mali" else "") + versionSuffix

        // Read by DriverBridge.defaultMode(): the driver used when driver.txt
        // does not exist yet.
        buildConfigField("String", "DEFAULT_DRIVER",
            if (libertyGpu == "mali") "\"system\"" else "\"turnip\"")
        buildConfigField("String", "GPU_FAMILY", "\"$libertyGpu\"")

        ndk {
            abiFilters += listOf("arm64-v8a")
        }
    }

    sourceSets["main"].java.srcDirs("src/main/java", sdlJavaDir)

    buildTypes {
        debug {
            isDebuggable    = true
            isJniDebuggable = true
            isMinifyEnabled = false
        }
        release {
            isMinifyEnabled = false
            signingConfig   = signingConfigs.getByName("debug")
        }
    }

    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_17
        targetCompatibility = JavaVersion.VERSION_17
    }

    packaging {
        jniLibs {
            // Unpack the libraries into nativeLibraryDir: the runtime finds its
            // GPU plugins by real path next to itself, and a Turnip driver
            // loaded through libadrenotools needs real files as well.
            useLegacyPackaging = true
            // build_native.sh decides what is stripped.
            keepDebugSymbols += "**/*.so"
        }
    }

    // Mali builds leave out the bundled Turnip driver: it only runs on Adreno.
    if (libertyGpu == "mali") {
        androidResources {
            ignoreAssetsPatterns += "turnip-r6.zip"
        }
    }

    lint {
        checkReleaseBuilds = false
        abortOnError = false
    }
}
