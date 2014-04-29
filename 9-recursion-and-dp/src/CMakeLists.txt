cmake_minimum_required(VERSION 2.6)
project(ctci)

set(CMAKE_CXX_FLAGS "-std=c++11 -stdlib=libc++")

file(GLOB src_files "*.cpp" "*.hpp")
add_executable(tests ${src_files})
target_link_libraries(tests gtest gtest_main)

