cmake_minimum_required(VERSION 3.14)
project(Algorithms)

set(CMAKE_CXX_STANDARD 14)

add_executable(first first_test.cpp lesson/first/first_lesson.cpp lesson/first/first_lesson.h)
add_executable(second second_test.cpp lesson/second/second_lesson.cpp lesson/second/second_lesson.h)