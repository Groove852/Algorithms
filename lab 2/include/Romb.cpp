//
// Created by nequamy on 29.10.2023.
//
#include "Romb.h"

Romb::Romb(double diagonal1, double diagonal2, double side)
        : diagonal1(diagonal1), diagonal2(diagonal2), side(side) {}

double Romb::calculateArea() const {
    return 0.5 * diagonal1 * diagonal2;
}

double Romb::calculatePerimeter() const {
    return 4 * side;
}