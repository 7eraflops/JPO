# Minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Project name
project(geometry)

# Set the C++ standard (C++11, C++17, etc.)
set(CMAKE_CXX_STANDARD 11)

# Include directories (add your include directory)
include_directories(inc)

# Collect all the .cpp files in the src directory
aux_source_directory(src SRC_FILES)

# Add the executable with the source files
add_executable(geometry.out ${SRC_FILES})

# Optional: Add extra flags (if needed)
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")