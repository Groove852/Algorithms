//
// Created by nequamy on 29.10.2023.
//
#include "Rectangle.h"
#include <stdio.h>

Rectangle::Rectangle(double width, double height) : width(width), height(height){
    printf("%s", "Rectangle contructor called\n");
}

double Rectangle::calculateArea() const {
    return width * height;
}

double Rectangle::calculatePerimeter() const {
    return 2 * (width + height);
}

Rectangle::~Rectangle(void) {
    printf("%s", "Rectangle destructor called\n");
}
