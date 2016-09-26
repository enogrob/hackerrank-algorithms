cmake_minimum_required(VERSION 3.4)
project(hackerrank_algorithms)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(hackerrank_algorithms ${SOURCE_FILES})
add_executable(compare-the-triplets compare-the-triplets.cpp)
add_executable(a-very-big-sum a-very-big-sum.cpp)
add_executable(diagonal-difference diagonal-difference.cpp)
add_executable(staircase staircase.cpp)
add_executable(circular-array-rotation circular-array-rotation.cpp)
add_executable(deque-example deque-example.cpp)