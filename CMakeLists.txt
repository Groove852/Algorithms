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

add_executable(case_4 "case 4/main.cpp"
        "case 4/include/Integration.h"
        "case 4/include/Integration.cpp")

# Laboratory work
add_executable(lab_1 "lab 1/main.cpp"
        "lab 1/include/Figure.h"
        "lab 1/include/Circle.h"
        "lab 1/include/Circle.cpp"
        "lab 1/include/Rectangle.h"
        "lab 1/include/Triangle.h"
        "lab 1/include/Romb.h"
        "lab 1/include/Trapecia.h"
        "lab 1/include/Rectangle.cpp"
        "lab 1/include/Triangle.cpp"
        "lab 1/include/Trapecia.cpp"
        "lab 1/include/Romb.cpp"
        "lab 1/include/Queue.cpp"
        "lab 1/include/Queue.h"
)