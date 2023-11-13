//
// Created by nequamy on 29.10.2023.
//
#include "Circle.h"

Circle::Circle(double radius) : radius(radius) {}

double Circle::calculateArea() const {
    return 3.14159 * radius * radius;
}

double Circle::calculatePerimeter() const {
    return 2 * 3.14159 * radius;
}