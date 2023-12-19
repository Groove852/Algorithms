//
// Created by nequamy on 29.10.2023.
//

#ifndef ALGORITHMS_TRAPECIA_H
#define ALGORITHMS_TRAPECIA_H
#include "Figure.h"

class Trapezia : public Figure {
public:
    Trapezia(double base1, double base2, double height, double side1, double side2);
    ~Trapezia() override;
    double calculateArea() const override;
    double calculatePerimeter() const override;

private:
    double base1;
    double base2;
    double height;
    double side1;
    double side2;
};

#endif //ALGORITHMS_TRAPECIA_H
