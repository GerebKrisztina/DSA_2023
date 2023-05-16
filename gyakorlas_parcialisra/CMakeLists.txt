cmake_minimum_required(VERSION 3.24)
project(gyakorlas_parcialisra C)

set(CMAKE_C_STANDARD 23)

add_executable(gyakorlas_parcialisra src/main.c src/functions.c headers/functions.h)
include_directories(gyakorlas_parcialisra headers)