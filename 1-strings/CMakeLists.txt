cmake_minimum_required(VERSION 2.6)
project(ctci)

set(CMAKE_CXX_FLAGS "-std=c++1y -stdlib=libc++")

### GTest ###
add_subdirectory(../gtest-1.7.0 ${CMAKE_CURRENT_BINARY_DIR}/gtest-1.7.0)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

### Unit Tests ###
add_subdirectory(src)

