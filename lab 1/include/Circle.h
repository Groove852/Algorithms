//
// Created by nequamy on 29.10.2023.
//

#ifndef ALGORITHMS_CIRCLE_H
#define ALGORITHMS_CIRCLE_H
#include "Figure.h"

class Circle : public Figure {
public:
    Circle(double radius);
    double calculateArea() const override;
    double calculatePerimeter() const override;

private:
    double radius;
};

#endif //ALGORITHMS_CIRCLE_H
