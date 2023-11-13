//
// Created by nequamy on 29.10.2023.
//

#ifndef ALGORITHMS_TRIANGLE_H
#define ALGORITHMS_TRIANGLE_H
#include "Figure.h"

class Triangle : public Figure {
public:
    Triangle(double base, double height, double side1, double side2, double side3);

    double calculateArea() const override;
    double calculatePerimeter() const override;

private:
    double base;
    double height;
    double side1;
    double side2;
    double side3;
};

#endif //ALGORITHMS_TRIANGLE_H
