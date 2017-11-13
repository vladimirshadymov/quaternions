cmake_minimum_required(VERSION 3.5)
project(quaternions)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_LIB qtr_algebra.cpp qtr_algebra.hpp)
set(SOURCE_FILES test.cpp)

add_library(quaternions STATIC ${SOURCE_LIB})
add_executable(test_quat ${SOURCE_FILES})

target_link_libraries(test_quat quaternions)
