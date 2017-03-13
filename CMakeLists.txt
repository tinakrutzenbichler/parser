cmake_minimum_required(VERSION 3.6)
project(parser)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        main.cpp
        makefile
        parser.cpp
        parser.hpp)

add_executable(parser ${SOURCE_FILES})