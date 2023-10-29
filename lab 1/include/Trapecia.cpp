//
// Created by nequamy on 29.10.2023.
//
#include "Trapecia.h"

Trapezia::Trapezia(double base1, double base2, double height, double side1, double side2)
        : base1(base1), base2(base2), height(height), side1(side1), side2(side2) {}

double Trapezia::calculateArea() const {
    return 0.5 * (base1 + base2) * height;
}

double Trapezia::calculatePerimeter() const {
    return base1 + base2 + side1 + side2;
}