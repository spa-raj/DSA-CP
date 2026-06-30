cmake_minimum_required(VERSION 4.3.4)
project(DSA_CP)

set(CMAKE_CXX_STANDARD 17)

# Pick up every .cpp under the topic folders. CONFIGURE_DEPENDS makes CMake
# re-glob when files are added/removed, so new problems are detected automatically.
file(GLOB_RECURSE CP_SOURCES CONFIGURE_DEPENDS
        "${CMAKE_SOURCE_DIR}/CPP_Intro/*.cpp"
        "${CMAKE_SOURCE_DIR}/dsa/*.cpp"
        "${CMAKE_SOURCE_DIR}/cp/*.cpp")

foreach(source_file ${CP_SOURCES})
    # Build a unique target name from the path relative to the project root,
    # e.g. cp/codeforces/1A.cpp -> cp_codeforces_1A. This avoids clashes when
    # different folders contain files with the same base name.
    file(RELATIVE_PATH rel_path "${CMAKE_SOURCE_DIR}" ${source_file})
    string(REGEX REPLACE "\\.cpp$" "" exe_name ${rel_path})
    string(REGEX REPLACE "[/\\\\]" "_" exe_name ${exe_name})
    add_executable(${exe_name} ${source_file})
endforeach()
