cmake_minimum_required(VERSION 3.24)
project(Labor4 C)

set(CMAKE_C_STANDARD 23)

add_executable(Labor4 src/main.c src/functions_student.c headers/functions_student.h)
include_directories(Labor4 headers)