cmake_minimum_required(VERSION 3.1)

#project name
project(AlgorithmLab)

#source file

#headers
include_directories(include)
include_directories(include/sort)
include_directories(include/testCase)

#sub directory
add_subdirectory(src/sort)
add_subdirectory(src/testCase)

#build
add_executable(AlgorithmLab src/main.cpp)
target_link_libraries(AlgorithmLab testCase)