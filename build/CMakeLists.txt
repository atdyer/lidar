# CMake minimum version
cmake_minimum_required (VERSION 2.6)

# Set the project name
project (lidar)

# Set up directories
set (PROJECT_DIR "../")
set (INCLUDE_DIR "${PROJECT_DIR}/include")
set (SRC_DIR "${PROJECT_DIR}/src")

# Set the executable name
set (EXE_NAME lidar)

# Add executables
add_executable (${EXE_NAME} ${PROJECT_DIR}/main.cpp)
