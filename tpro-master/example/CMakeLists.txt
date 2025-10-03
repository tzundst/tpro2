cmake_minimum_required(VERSION 3.13)
project(tpro)

set(CMAKE_CXX_STANDART 14)

add_executable(example_test example/example_tests.cpp example/example.cpp catch_amalgamated.cpp)
