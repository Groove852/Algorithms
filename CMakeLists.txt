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
        "lab 1/include/Element.h"
        "lab 1/include/Queue.h"
        "lab 1/include/Queue.cpp"
        "lab 1/include/Stack.h"
        "lab 1/include/Stack.cpp"
)
add_executable(lab_2 "lab 2/main.cpp"
        "lab 2/include/Figure.h"
        "lab 2/include/Circle.h"
        "lab 2/include/Circle.cpp"
        "lab 2/include/Rectangle.h"
        "lab 2/include/Rectangle.cpp"
        "lab 2/include/Triangle.h"
        "lab 2/include/Triangle.cpp"
        "lab 2/include/Romb.h"
        "lab 2/include/Romb.cpp"
        "lab 2/include/Trapecia.h"
        "lab 2/include/Trapecia.cpp"
        "lab 2/include/Queue.h"
        "lab 2/include/Queue.cpp"
)