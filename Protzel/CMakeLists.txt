cmake_minimum_required(VERSION 3.22)
project(ProtzelSolution)

set(CMAKE_CXX_STANDARD 17)

add_library(Protzel SHARED src/Protzel.h src/Protzel/Core.h src/Protzel/Application.cpp src/Protzel/Application.h src/Protzel/EntryPoint.h)