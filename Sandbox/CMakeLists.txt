cmake_minimum_required(VERSION 3.22)
project(ProtzelSolution)

set(CMAKE_CXX_STANDARD 17)

add_executable(Sandbox src/main.cpp)

target_link_directories(Sandbox PUBLIC ../Protzel/cmake-build-Protzel)
target_include_directories(Sandbox PUBLIC ../Protzel/src)
target_link_libraries(Sandbox Protzel)