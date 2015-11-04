# CMake minimum version
cmake_minimum_required (VERSION 2.6)

# Set the project name
project (lidar)

# Set the executable name
set (EXE_NAME lidar)

# Include directories
include_directories(app/include)

# Add executables
add_executable (${EXE_NAME} ${CMAKE_SOURCE_DIR}/app/main.cpp
        app/src/types/Point.cpp app/include/types/Point.h)
