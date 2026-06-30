# DSA-CP

My C++ practice for Data Structures & Algorithms and Competitive Programming.
Solutions are organized under `dsa/`, `cp/`, and `CPP_Intro/`.

## Layout

| Folder       | Contents                                                  |
|--------------|-----------------------------------------------------------|
| `CPP_Intro/` | C++ basics and intro exercises                            |
| `dsa/`       | DSA practice, organized **by pattern** (e.g. `graphs/`)   |
| `cp/`        | CP practice, organized **by platform** (e.g. `codeforces/`)|
| `templates/` | Starter skeletons (not built; copy into a topic folder)   |

## Adding a solution

Copy the relevant template into the right folder and rename it:

```bash
cp templates/dsa_solution.cpp dsa/two-pointers/two_sum.cpp     # DSA, by pattern
cp templates/cp_solution.cpp  cp/codeforces/1850A.cpp          # CP, by platform
```

Fill in the header (link + 1-line summary + approach/complexity). CMake picks up
the new file automatically on the next configure — no manual target needed.

## Build

CMake auto-creates one executable per `.cpp` file (target name derived from the
path, e.g. `cp/codeforces/1A.cpp` → `cp_codeforces_1A`). Requires CMake ≥ 4.3.4.

```bash
cmake -S . -B cmake-build-debug
cmake --build cmake-build-debug
```

## Note on problem statements

This repo contains **my own solutions**. It does not reproduce full problem
statements from LeetCode, Codeforces, or other platforms — each solution links
to the original problem instead. Problem text is owned by the respective
platforms/authors.
