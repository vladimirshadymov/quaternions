cmake_minimum_required(VERSION 3.4)
project(quaternions)

set(CMAKE_CXX_STANDARD 11)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

set(SOURCE_LIB qtr_algebra.hpp qtr_algebra.cpp)

set(TEST_FILE test_qtr.cpp)

add_library(qtr_lib STATIC ${SOURCE_LIB})
add_executable(test_qtr test_qtr.cpp)

target_link_libraries(test_qtr qtr_lib ${GTEST_LIBRARIES} pthread)