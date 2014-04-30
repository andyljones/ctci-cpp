cmake_minimum_required(VERSION 2.6)
project(ctci)

ADD_DEFINITIONS(-std=c++1y)
ADD_DEFINITIONS(-stdlib=libc++)

### GTest ###
add_subdirectory(../gtest-1.7.0 ${CMAKE_CURRENT_BINARY_DIR}/gtest-1.7.0)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

### Unit Tests ###
add_subdirectory(src)

