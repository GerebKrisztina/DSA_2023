cmake_minimum_required(VERSION 3.24)
project(Labor3 C)

set(CMAKE_C_STANDARD 23)

add_executable(Labor3 src/main.c src/functions.matrix.c headers/functions.matrix.h)
include_directories(Labor3 headers)