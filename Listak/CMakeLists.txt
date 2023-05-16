cmake_minimum_required(VERSION 3.24)
project(Listak C)

set(CMAKE_C_STANDARD 23)

add_executable(Listak src/main.c src/listak.c headers/listak.h)
include_directories(Listak headers)