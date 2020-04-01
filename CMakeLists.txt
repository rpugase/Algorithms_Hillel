cmake_minimum_required(VERSION 3.14)
project(Algorithms)

set(CMAKE_CXX_STANDARD 14)

add_executable(first first/first_test.cpp first/first_lesson.cpp first/first_lesson.h)
add_executable(second second/second_test.cpp second/second_lesson.cpp second/second_lesson.h)
add_executable(third third/third_lesson.cpp third/third_lesson.h third/third_test.cpp)