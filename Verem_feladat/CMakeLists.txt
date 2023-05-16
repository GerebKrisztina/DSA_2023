cmake_minimum_required(VERSION 3.24)
project(Verem_feladat C)

set(CMAKE_C_STANDARD 23)

add_executable(Verem_feladat src/main.c src/verem.c headers/verem.h headers/constants.h)
include_directories(Verem_feladat headers)