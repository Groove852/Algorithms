//
// Created by nequamy on 29.10.2023.
//

#ifndef ALGORITHMS_FIGURE_H
#define ALGORITHMS_FIGURE_H
#include <cmath>

class Figure {
public:
    Figure(void);
    virtual ~Figure(void);
    virtual double calculateArea() const = 0;
    virtual double calculatePerimeter() const = 0;
};

#endif //ALGORITHMS_FIGURE_H
