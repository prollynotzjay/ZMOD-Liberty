# Profile-guided optimization (PGO) recordings

PGO builds the game with a recording of how it really runs on a phone. The
compiler then lays out and optimizes the hot code paths (the city, traffic,
the renderer) for that recording. It speeds up the CPU side on every phone,
Mali or Adreno, without changing what the game does.

This folder holds the recordings. A `pgo: use` build merges everything here.

## 1. Build the recording APK

GitHub → **Actions** → **Android APK** → **Run workflow**, set **pgo** to
`generate`. The artifact is called `ZMOD-Liberty-...-pgo-recording.apk`.

The recording build is slower than a normal one (every branch is counted).
That is expected; only use it to record.

## 2. Play

Install it over your normal build (same signing key, saves stay) and play for
**15-30 minutes**, mixing what people normally do:

- driving through the busy city (Algonquin), in traffic, fast
- walking among pedestrians
- a few missions or cutscenes, a shootout, the phone, the pause menu

Leave the game running in gameplay for at least a minute at the end. The
recording is written every 60 seconds (logcat: `pgo: profile written`).

## 3. Collect the files

They are in **Download/ZMOD-PGO** (or in
`Android/data/com.libertyrecomp/files/pgo` when the app has no "All files
access"):

- `libmain-<number>.profraw` (the game)
- `rexgpu-<number>.profraw` (the renderer)

Each game session makes a new pair. Keep all of them; more sessions give a
better profile. Zip them (GitHub's web upload takes files up to 25 MB, and the
zip is much smaller).

## 4. Upload and build the optimized APK

Upload the `.zip` (or the `.profraw` files) into this folder, `os/android/pgo/`.
Then **Run workflow** with **pgo** = `use`. The build merges the recordings with
the NDK's `llvm-profdata` and names the APK `...-pgo.apk`.

## Notes

- The files contain only function counters, nothing about you or your phone.
- After code changes the profile stays usable: functions that changed are just
  built without it. Record again after big updates.
- Compare a normal and a `-pgo` APK with the overlay's "1% / 0.1% lows" and
  the `title-fps` log line, on the same route, before deciding to ship it.
