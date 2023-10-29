cmake_minimum_required(VERSION 3.26)
project(Algorithms)

set(CMAKE_CXX_STANDARD 17)

# Practical lessons
add_executable(case_3_task_1 "case 3/case3_task1.cpp"
        "case 3/include/Graph.h"
        "case 3/include/Graph.cpp")
add_executable(case_3_task_2 "case 3/case3_task2.cpp"
        "case 3/include/GraphAdapt.h"
        "case 3/include/GraphAdapt.cpp")

add_executable(case_4 "case 4/main.cpp")

# Laboratory work
