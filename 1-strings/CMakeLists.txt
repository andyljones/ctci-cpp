cmake_minimum_required(VERSION 2.6)
project(ctci-strings)

### GTest ###
ADD_SUBDIRECTORY (gtest-1.7.0)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

### Unit Tests ###
add_executable(tests tests.cpp)
target_link_libraries(tests gtest gtest_main)
