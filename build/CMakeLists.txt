# CMake minimum version
cmake_minimum_required (VERSION 2.6)

# Set the project name
project (lidar)

# Set the executable name
set (EXE_NAME lidar)

# Add executables
add_executable (${EXE_NAME} main.cpp)