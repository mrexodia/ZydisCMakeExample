# Based on: https://cliutils.gitlab.io/modern-cmake/chapters/basics/example.html

cmake_minimum_required(VERSION 3.1...3.16)

project(ZydisCMakeExample VERSION 1.0 LANGUAGES CXX)

# Add Zydis as a subproject
set(ZYDIS_BUILD_SHARED_LIB OFF CACHE BOOL "")
set(ZYDIS_BUILD_EXAMPLES OFF CACHE BOOL "")
set(ZYDIS_BUILD_TOOLS OFF CACHE BOOL "")
set(ZYDIS_FUZZ_AFL_FAST OFF CACHE BOOL "")
set(ZYDIS_LIBFUZZER OFF CACHE BOOL "")
add_subdirectory(zydis)

# Our target that uses Zydis
add_executable(ZydisExample zydis_example.cpp)

target_link_libraries(ZydisExample PRIVATE Zydis)