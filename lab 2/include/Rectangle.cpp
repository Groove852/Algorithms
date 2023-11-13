//
// Created by nequamy on 29.10.2023.
//
#include "Rectangle.h"

Rectangle::Rectangle(double width, double height) : width(width), height(height) {}

double Rectangle::calculateArea() const {
    return width * height;
}

double Rectangle::calculatePerimeter() const {
    return 2 * (width + height);
}