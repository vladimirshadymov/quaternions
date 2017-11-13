cmake_minimum_required(VERSION 3.5)
project(quaternions)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_LIB qtr_algebra.cpp qtr_algebra.hpp)

add_library(quaternions STATIC ${SOURCE_LIB})
