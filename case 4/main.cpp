#include <iostream>
#include "include/Integration.cpp"
#include <cmath>

double func(double x) {
    return 1 / x;
}

int main() {
    Integrator* rectangularIntegrator = new RectangularIntegrator();
    Integrator* simpsonIntegrator = new SimpsonIntegrator();
    Integrator* rombergIntegrator = new RombergIntegrator();
    Integrator* trapezoidalIntegrator = new TrapezoidalIntegrator();

    double lower_limit = 1;
    double upper_limit = std::exp(1);

    double rectangular_integration = rectangularIntegrator->integrate(lower_limit, upper_limit, func, 0.01);
    double simpson_integration = simpsonIntegrator->integrate(lower_limit, upper_limit, func, 0.01);
    double romberg_integration = rombergIntegrator->integrate(lower_limit, upper_limit, func, 0.01);
    double trapezoidal_integration = trapezoidalIntegrator->integrate(lower_limit, upper_limit, func, 0.01);

    std::cout << "Integrating f(x) = 1/x from 1 to e with step 0.01\n\n";
    std::cout << "Rectangular integration result: " << rectangular_integration << std::endl;
    std::cout << "Simpson integration result: " << simpson_integration << std::endl;
    std::cout << "Romberg integration result: " << romberg_integration << std::endl;
    std::cout << "Trapezoidal integration result: " << trapezoidal_integration << std::endl;

    return 0;
}