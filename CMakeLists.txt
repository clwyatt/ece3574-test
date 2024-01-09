cmake_minimum_required(VERSION 3.9...3.19)
project(DevEnvTest CXX)

# require a C++11 compiler for all targets
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# build test driver executable
add_executable(unit_tests catch.hpp unit_tests.cpp test_stl.cpp)

# setup testing
enable_testing()
add_test(unit_tests unit_tests)
