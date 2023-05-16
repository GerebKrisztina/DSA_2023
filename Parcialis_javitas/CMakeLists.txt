cmake_minimum_required(VERSION 3.24)
project(Parcialis_javitas C)

set(CMAKE_C_STANDARD 23)

add_executable(Parcialis_javitas src/main.c src/functions.c headers/functions.h headers/constants.h)
include_directories(Parcialis_javitas headers)