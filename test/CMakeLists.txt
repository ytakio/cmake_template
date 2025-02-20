cmake_minimum_required(VERSION 3.20)

project(test LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(test_lib)
target_sources(test_lib PRIVATE test.cc)
target_include_directories(test_lib PRIVATE ${PROJECT_BINARY_DIR})

include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.15.2
    GIT_SHALLOW True)

FetchContent_MakeAvailable(googletest)

target_link_libraries(test_lib PRIVATE gtest_main sample_add)

include(GoogleTest)
gtest_discover_tests(test_lib)
