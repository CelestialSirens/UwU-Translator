cmake_minimum_required(VERSION 3.27)
project(C_project)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(C_project
        main.cpp
        main.h)
