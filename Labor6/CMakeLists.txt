cmake_minimum_required(VERSION 3.24)
project(Labor6 C)

set(CMAKE_C_STANDARD 23)

add_executable(Labor6 src/main.c src/person.c headers/person.h headers/constants.h)
include_directories(Labor6 headers)