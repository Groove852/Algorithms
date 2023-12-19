//
// Created by nequamy on 29.10.2023.
//
#include "Circle.h"
#include <stdio.h>

Circle::Circle(double radius) : radius(radius) {
    printf("%s", "Rectangle contructor called\n");
}

double Circle::calculateArea() const {
    return 3.14159 * radius * radius;
}

double Circle::calculatePerimeter() const {
    return 2 * 3.14159 * radius;
}

Circle::~Circle(void){
    printf("%s", "Rectangle contructor called\n");
}
