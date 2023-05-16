cmake_minimum_required(VERSION 3.24)
project(Parcialis_Gereb_Krisztina C)

set(CMAKE_C_STANDARD 23)

add_executable(Parcialis_Gereb_Krisztina src/main.c src/orszag.c headers/orszag.h headers/constants.h)
include_directories(Parcialis_Gereb_Krisztina headers)