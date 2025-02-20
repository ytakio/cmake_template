cmake_minimum_required(VERSION 3.20)

project(lib LANGUAGES C)

add_library(sample_add)
target_sources(sample_add PRIVATE sample_add.c)

target_include_directories(sample_add PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_options(sample_add PRIVATE -Wall -Wextra -Wpedantic)
