cmake_minimum_required(VERSION 3.20)

project(doc)

find_package(Doxygen
              REQUIRED dot
              OPTIONAL_COMPONENTS dia mscgen)

doxygen_add_docs(doxygen)
