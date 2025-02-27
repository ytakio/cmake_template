cmake_minimum_required(VERSION 3.20)

find_package(Doxygen
              REQUIRED dot
              OPTIONAL_COMPONENTS dia mscgen)

doxygen_add_docs(doxygen ${CMAKE_SOURCE_DIR}/src
                  COMMENT "Generating API document with Doxygen")
