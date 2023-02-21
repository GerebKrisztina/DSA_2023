cmake_minimum_required(VERSION 3.24)
project(Labor2 C)

set(CMAKE_C_STANDARD 23)

add_executable(Labor2 src/main.c src/functions_matrix.c headers/functions_matrix.h headers/constants.h)
include_directories(Labor2 headers)
