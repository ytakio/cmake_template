cmake_minimum_required(VERSION 3.20)

find_package(Doxygen)

if(DOXYGEN_FOUND)
  doxygen_add_docs(doxygen ${CMAKE_SOURCE_DIR}/src
                   COMMENT "Generating API document with Doxygen")
else()
  message(WARNING "Doxygen is needed to build documentation.")
endif()
