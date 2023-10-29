//
// Created by nequamy on 29.10.2023.
//

#ifndef ALGORITHMS_INTEGRATION_H
#define ALGORITHMS_INTEGRATION_H

class Integrator {
public:
    virtual double integrate(double a, double b, double (*func)(double)) const = 0;
    virtual double integrate(double a, double b, double (*func)(double), double h) const = 0;
};

#endif //ALGORITHMS_INTEGRATION_H
