cmake_minimum_required(VERSION 3.10)
project(Movemint)

set(CMAKE_CXX_STANDARD 17)

# Find GLFW
find_package(PkgConfig REQUIRED)
pkg_search_module(GLFW REQUIRED glfw3)

# Find OpenGL
find_package(OpenGL REQUIRED)

# Include directories
include_directories(${GLFW_INCLUDE_DIRS})
include_directories(${OPENGL_INCLUDE_DIR})
include_directories(${CMAKE_SOURCE_DIR}/include)

# Source files
set(SOURCES
    src/main.cpp
    src/glad.c
    src/Player.cpp
)

# Create executable
add_executable(Movemint ${SOURCES})

# Link libraries (order matters a little!)
target_link_libraries(Movemint
    ${GLFW_LIBRARIES}
    ${OPENGL_LIBRARIES}
    dl # Add dynamic linking library (important on Linux for GLAD sometimes)
)
