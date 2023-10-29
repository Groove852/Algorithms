//
// Created by nequamy on 29.10.2023.
//
#include "Integration.h"
#include <cmath>

class RectangularIntegrator : public Integrator {
public:
    double integrate(double a, double b, double (*func)(double)) const override {
        double h = 0.01;
        double sum = 0;
        double x = a;
        while (x < b) {
            sum += h * func(x);
            x += h;
        }
        return sum;
    }

    double integrate(double a, double b, double (*func)(double), double h) const override {
        double sum = 0;
        double x = a;
        while (x < b) {
            sum += h * func(x);
            x += h;
        }
        return sum;
    }
};

class SimpsonIntegrator : public Integrator {
public:
    double integrate(double a, double b, double (*func)(double)) const override {
        double h = 0.01;
        int n = (b - a) / (2 * h);
        double sum = func(a) + func(b);
        double x = a + h;
        for (int i = 1; i < n; i++) {
            sum += 4 * func(x) + 2 * func(x + h);
            x += 2 * h;
        }
        return (h / 3) * sum;
    }

    double integrate(double a, double b, double (*func)(double), double h) const override {
        int n = (b - a) / (2 * h);
        double sum = func(a) + func(b);
        double x = a + h;
        for (int i = 1; i < n; i++) {
            sum += 4 * func(x) + 2 * func(x + h);
            x += 2 * h;
        }
        return (h / 3) * sum;
    }
};

class RombergIntegrator : public Integrator {
public:
    double integrate(double a, double b, double (*func)(double)) const override {
        double h = 0.01;
        int n = (b - a) / h;
        double sum = func(a) + func(b);
        double x = a + h;
        for (int i = 1; i < n; i++) {
            sum += 2 * func(x);
            x += h;
        }
        return 0.5 * h * sum;
    }

    double integrate(double a, double b, double (*func)(double), double h) const override {
        int n = (b - a) / h;
        double sum = func(a) + func(b);
        double x = a + h;
        for (int i = 1; i < n; i++) {
            sum += 2 * func(x);
            x += h;
        }
        return 0.5 * h * sum;
    }
};

class TrapezoidalIntegrator : public Integrator {
public:
    double integrate(double a, double b, double (*func)(double)) const override {
        double h = 0.01;
        int n = (b - a) / h;
        double sum = func(a) + func(b);
        double x = a + h;
        for (int i = 1; i < n; i++) {
            sum += 2 * func(x);
            x += h;
        }
        return (h / 2) * sum;
    }

    double integrate(double a, double b, double (*func)(double), double h) const override {
        int n = (b - a) / h;
        double sum = func(a) + func(b);
        double x = a + h;
        for (int i = 1; i < n; i++) {
            sum += 2 * func(x);
            x += h;
        }
        return (h / 2) * sum;
    }
};