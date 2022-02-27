cmake_minimum_required(VERSION 3.0.0)
project(norepeats VERSION 0.1.0)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

# GoogleTest requires at least C++11
set(CMAKE_CXX_STANDARD 11)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Set include directory for header files
# include_directories("include") #API header files included via parent CMake

include_directories(norepeats)
add_subdirectory(norepeats)
