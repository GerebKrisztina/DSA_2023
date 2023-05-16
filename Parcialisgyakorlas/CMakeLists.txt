cmake_minimum_required(VERSION 3.24)
project(Parcialisgyakorlas C)

set(CMAKE_C_STANDARD 23)

add_executable(Parcialisgyakorlas src/main.c src/binarytree.c headers/binarytree.h headers/constants.h)
include_directories(Parcialisgyakoras headers)
