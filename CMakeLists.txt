cmake_minimum_required(VERSION 3.0.0)
project(SYM VERSION 0.1.0)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

# GoogleTest requires at least C++11
set(CMAKE_CXX_STANDARD 11)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Set include directory for header files
# include_directories("include") #API header files included via parent CMake

# set(sources
#     #src/main.cpp
#     src/sym.cpp
#     test/test_sym.cpp
#     )

# add_executable(programa ${sources})

# target_link_libraries(programa 
#                     gtest
#                     gmock
#                     pthread)

include_directories(sym)
add_subdirectory(sym)
