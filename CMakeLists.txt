cmake_minimum_required(VERSION 3.11)

# Project name
project(euclid VERSION 0.0.1)

include_directories(${CMAKE_BINARY_DIR}/src)

find_package(glfw3 3.3 REQUIRED)
find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)


# Executables
add_executable(euclid src/main.cpp)

target_link_libraries(euclid glfw)
target_link_libraries(euclid GLEW)
target_link_libraries(euclid OpenGL::GL)
