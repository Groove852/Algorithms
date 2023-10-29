//
// Created by nequamy on 29.10.2023.
//

#ifndef ALGORITHMS_ROMB_H
#define ALGORITHMS_ROMB_H
#include "Figure.h"

class Romb : public Figure {
public:
    Romb(double diagonal1, double diagonal2, double side);

    double calculateArea() const override;
    double calculatePerimeter() const override;

private:
    double diagonal1;
    double diagonal2;
    double side;
};

#endif //ALGORITHMS_ROMB_H
