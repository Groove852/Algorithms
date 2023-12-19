//
// Created by nequamy on 29.10.2023.
//

#ifndef ALGORITHMS_RECTANGLE_H
#define ALGORITHMS_RECTANGLE_H
#include "Figure.h"

class Rectangle : public Figure {
public:
    Rectangle(double width, double height);
    ~Rectangle() override;
    double calculateArea() const override;
    double calculatePerimeter() const override;

private:
    double width;
    double height;
};
#endif //ALGORITHMS_RECTANGLE_H
