cmake_minimum_required(VERSION 3.22)
project(ProtzelSolution)

set(CMAKE_CXX_STANDARD 17)

include_directories(Protzel/vendor/spdlog/include Protzel/vendor/glm)

add_subdirectory("${PROJECT_SOURCE_DIR}/Protzel" "${PROJECT_SOURCE_DIR}/Protzel/cmake-build-Protzel")
add_subdirectory("${PROJECT_SOURCE_DIR}/Sandbox" "${PROJECT_SOURCE_DIR}/Sandbox/cmake-build-Sandbox")
