cmake_minimum_required(VERSION 3.22)
project(glad)

add_library(glad include/glad/glad.h src/glad.c)
target_include_directories(glad PUBLIC include/)

set(CMAKE_C_FLAGS "-fPIC")