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
        app/src/types/Point.cpp app/include/types/Point.h
        app/src/files/LAS.cpp app/include/files/LAS.h app/include/types/Exceptions.h)

# We need C++11
set_property(TARGET ${EXE_NAME} PROPERTY CXX_STANDARD 11)
set_property(TARGET ${EXE_NAME} PROPERTY CXX_STANDARD_REQUIRED ON)