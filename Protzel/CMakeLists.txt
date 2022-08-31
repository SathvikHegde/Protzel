cmake_minimum_required(VERSION 3.22)
project(ProtzelSolution)

set(CMAKE_CXX_STANDARD 17)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory(vendor/GLFW vendor/GLFW/build)
add_subdirectory(vendor/glad vendor/glad/build)
add_subdirectory(vendor/imgui vendor/imgui/build)

find_package(OpenGL REQUIRED)

add_library(Protzel SHARED src/Protzel.h src/Protzel/Core.h src/Protzel/Application.cpp src/Protzel/Application.h src/Protzel/EntryPoint.h src/Protzel/Log.cpp src/Protzel/Log.h src/Protzel/Events/Event.h src/Protzel/Events/KeyEvent.h src/Protzel/Events/MouseEvent.h src/Protzel/Events/ApplicationEvent.h src/ptzpch.h src/Protzel/Window.h src/Platform/LinuxWindow.cpp src/Platform/LinuxWindow.h src/Protzel/Layer.cpp src/Protzel/Layer.h src/Protzel/LayerStack.cpp src/Protzel/LayerStack.h src/Protzel/ImGui/ImGuiLayer.h src/Protzel/ImGui/ImGuiLayer.cpp src/Protzel/Input.h src/Platform/LinuxInput.h src/Platform/LinuxInput.cpp src/Protzel/KeyCodes.h src/Protzel/MouseButtonCodes.h src/Platform/OpenGL/ImGuiBuild.cpp)

if(WIN32)
    target_compile_definitions(Protzel PUBLIC PTZ_PLATFORM_WIN GLFW_INCLUDE_NONE)
endif()
if(UNIX AND NOT APPLE)
    target_compile_definitions(Protzel PUBLIC PTZ_PLATFORM_LINUX GLFW_INCLUDE_NONE)
endif()

target_include_directories(Protzel PRIVATE src/ ${OPENGL_INCLUDE_DIRS})
target_link_libraries(Protzel ${OPENGL_LIBRARIES} glfw glad imgui)

target_precompile_headers(Protzel PRIVATE src/ptzpch.h)
