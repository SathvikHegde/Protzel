cmake_minimum_required(VERSION 3.22)
project(ProtzelSolution)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory("${PROJECT_SOURCE_DIR}/Protzel" "${PROJECT_SOURCE_DIR}/Protzel/cmake-build")
add_subdirectory("${PROJECT_SOURCE_DIR}/Sandbox" "${PROJECT_SOURCE_DIR}/Sandbox/cmake-build")
