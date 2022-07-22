cmake_minimum_required(VERSION 3.22)
project(ProtzelSolution)

set(CMAKE_CXX_STANDARD 17)

add_library(Protzel SHARED src/Protzel.h src/Protzel/Core.h src/Protzel/Application.cpp src/Protzel/Application.h src/Protzel/EntryPoint.h src/Protzel/Log.cpp src/Protzel/Log.h src/Protzel/Events/Event.h src/Protzel/Events/KeyEvent.h src/Protzel/Events/MouseEvent.h src/Protzel/Events/ApplicationEvent.h src/ptzpch.h)

target_include_directories(Protzel PRIVATE src/ vendor/GLFW/include)
target_link_directories(Protzel PRIVATE vendor/GLFW/build/src)
target_link_libraries(Protzel glfw)

target_precompile_headers(Protzel PRIVATE src/ptzpch.h)