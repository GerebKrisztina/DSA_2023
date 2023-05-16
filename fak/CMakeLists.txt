cmake_minimum_required(VERSION 3.24)
project(fak C)

set(CMAKE_C_STANDARD 23)

add_executable(fak src/main.c src/fak.c headers/fak.h)
include_directories(fak headers)
