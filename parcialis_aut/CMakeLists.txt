cmake_minimum_required(VERSION 3.24)
project(parcialis_aut C)

set(CMAKE_C_STANDARD 23)

add_executable(parcialis_aut src/main.c src/keresofa.c headers/keresofa.h headers/constants.h)
include_directories(parcialis_aut headers)

