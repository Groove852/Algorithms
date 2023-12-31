//
// Created by nequamy on 29.10.2023.
//
#include "Triangle.h"
#include <stdio.h>

Triangle::Triangle(double base, double height, double side1, double side2, double side3)
        : base(base), height(height), side1(side1), side2(side2), side3(side3) {
    printf("%s", "Triangle constructor called\n");
}

double Triangle::calculateArea() const {
    return 0.5 * base * height;
}

double Triangle::calculatePerimeter() const {
    return side1 + side2 + side3;
}

Triangle::~Triangle() {
    printf("%s", "Triangle destructor called\n");
}
