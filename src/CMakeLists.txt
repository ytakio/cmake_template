cmake_minimum_required(VERSION 3.20)

project(lib LANGUAGES C CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(sample_add)
target_sources(sample_add PRIVATE sample_add.c)
target_include_directories(sample_add PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_options(sample_add PRIVATE -Wall)
target_compile_options(sample_add
    PRIVATE $<$<NOT:$<CXX_COMPILER_ID:MSVC>>:-Wextra;-Wpedantic>)

add_library(sample_sub)
target_sources(sample_sub PRIVATE sample_sub.cc)
target_include_directories(sample_sub PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_options(sample_sub PRIVATE -Wall)
target_compile_options(sample_sub
    PRIVATE $<$<NOT:$<CXX_COMPILER_ID:MSVC>>:-Wextra;-Wpedantic>)

