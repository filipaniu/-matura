cmake_minimum_required(VERSION 3.29)
project(Szyfry)

set(CMAKE_CXX_STANDARD 20)

add_executable(Szyfry main.cpp
        cezar.cpp
        cezar.h)
