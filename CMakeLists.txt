cmake_minimum_required(VERSION 3.20)

project(template)

set(default_build_type "Release")

if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  message(
    STATUS
      "Defaulting build type to '${default_build_type}' since not specified.")
  set(CMAKE_BUILD_TYPE
      "${default_build_type}"
      CACHE
        STRING
        "Choose the type of build, options are: 'Debug', 'Release', 'MinSizeRel', 'RelWithDebInfo'."
        FORCE)
endif()

# Set the possible values of build type for cmake-gui
set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release"
                                             "MinSizeRel" "RelWithDebInfo")

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(src)
add_subdirectory(doc)

enable_testing()
add_subdirectory(test)
