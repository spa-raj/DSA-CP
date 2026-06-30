# DSA-CP

My C++ practice for Data Structures & Algorithms and Competitive Programming.
Solutions are organized under `dsa/`, `cp/`, and `CPP_Intro/`.

## Layout

| Folder       | Contents                                      |
|--------------|-----------------------------------------------|
| `CPP_Intro/` | C++ basics and intro exercises                |
| `dsa/`       | Data structures & algorithms practice         |
| `cp/`        | Competitive programming (Codeforces, etc.)    |

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
