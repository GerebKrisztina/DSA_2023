cmake_minimum_required(VERSION 3.24)
project(Labor4_2 C)

set(CMAKE_C_STANDARD 23)

add_executable(Labor4_2 src/main.c src/functios_IntArray.c headers/functios_IntArray.h headers/constants.h)
include_directories(Labor4_2 headers)
