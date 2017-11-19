cmake_minimum_required(VERSION 3.5)
project(quaternions)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_LIB qtr_algebra.hpp qtr_algebra.cpp)

set(TEST_FILE test.cpp)

add_library(qtr_lib STATIC ${SOURCE_LIB})
add_executable(test_qtr test.cpp)

target_link_libraries(test_qtr qtr_lib)