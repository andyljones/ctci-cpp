cmake_minimum_required(VERSION 2.6)
project(ctci-strings)

file(GLOB src_files "*.cpp" "*.hpp")
add_executable(tests ${src_files})
target_link_libraries(tests gtest gtest_main)

ADD_DEFINITIONS(-std=c++11)