cmake_minimum_required(VERSION 4.3.4)
project(IntroToC__)

set(CMAKE_CXX_STANDARD 17)

file(GLOB CP_SOURCES CONFIGURE_DEPENDS "src/*.cpp")

foreach(source_file ${CP_SOURCES})
    get_filename_component(exe_name ${source_file} NAME_WE)
    add_executable(${exe_name} ${source_file})
endforeach()