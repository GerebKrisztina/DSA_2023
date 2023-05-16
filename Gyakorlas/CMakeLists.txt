cmake_minimum_required(VERSION 3.24)
project(Gyakorlas C)

set(CMAKE_C_STANDARD 23)

add_executable(Gyakorlas src/main.c src/vizsga.c headers/vizsga.h headers/constants.h)
include_directories(Gyakorlas headers)