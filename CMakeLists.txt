cmake_minimum_required(VERSION 3.11)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Project name
project(euclid VERSION 0.0.1)

include_directories(${CMAKE_BINARY_DIR}/src)

find_package(glfw3 3.3 REQUIRED)
find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)


# Executables
add_executable(euclid src/main.cpp src/utils/color.cpp src/utils/logging.cpp)

target_link_libraries(euclid glfw)
target_link_libraries(euclid GLEW)
target_link_libraries(euclid OpenGL::GL)
