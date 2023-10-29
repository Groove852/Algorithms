cmake_minimum_required(VERSION 3.26)
project(Algorithms)

set(CMAKE_CXX_STANDARD 17)

# Practical lessons
add_executable(case_3 "case 3/main.cpp"
        "case 3/include/Graph.h"
        "case 3/include/Graph.cpp")
add_executable(case_4 "case 4/main.cpp")

# Laboratory work
add_executable(lab_1 "lab 1/main.cpp")
add_executable(lab_2 "lab 2/main.cpp")
add_executable(lab_3 "lab 3/main.cpp")
add_executable(lab_4 "lab 4/main.cpp")
