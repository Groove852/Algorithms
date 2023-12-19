#include <iostream>
#include "include/Circle.h"
#include "include/Trapecia.h"
#include "include/Triangle.h"
#include "include/Queue.h"
#include "include/Romb.h"
#include "include/Rectangle.h"

int main() {
    Queue queue1;
    Queue queue2;
    Queue queue3;
    Queue queue4;

    Figure* f1, *f2, *f3, *f4, *f5, *f6, *f7, *f8, *f9, *f10;

    Circle* c1, *c2;
    c1 = new Circle(5);
    c2 = new Circle(7);
    f1 = (Figure*) c1; f2 = (Figure*) c2;

    Rectangle* r1, *r2;
    r1 = new Rectangle(4,6);
    r2 = new Rectangle(3,9);
    f3 = (Figure*) r1; f4 = (Figure*) r2;

    Triangle* tr1, *tr2;
    tr1 = new Triangle(5, 8, 7, 7, 8);
    tr2 = new Triangle(6, 9, 6, 9, 10);
    f5 = (Figure*) tr1; f6 = (Figure*) tr2;

    Trapezia* tz1, *tz2;
    tz1 = new Trapezia(4, 7, 5, 4, 5);
    tz2 = new Trapezia(5, 9, 6, 7, 8);
    f7 = (Figure*) tz1; f8 = (Figure*) tz2;

    Romb* ro1, *ro2;
    ro1 = new Romb(6, 8, 4);
    ro2 = new Romb(8, 10, 5);
    f9 = (Figure*) ro1; f10 = (Figure*) ro2;


    queue1.enqueue(c1);
    queue1.enqueue(c2);
    queue1.enqueue(r1);
    queue1.enqueue(r2);

    queue2.enqueue(tr1);
    queue2.enqueue(tr2);
    queue2.enqueue(r1);
    queue2.enqueue(r2);

    queue3.enqueue(tr1);
    queue3.enqueue(tr2);
    queue3.enqueue(r1);
    queue3.enqueue(r2);

    queue4.enqueue(r1);
    queue4.enqueue(r2);
    queue4.enqueue(r1);
    queue4.enqueue(r2);

    while (!queue1.isEmpty() || !queue2.isEmpty() || !queue3.isEmpty()) {
        std::cout << std::endl << "Queue 1 (Circle/Rectangle): " << std::endl;
        while (!queue1.isEmpty()) {
            Figure* figure = queue1.dequeue();
            std::cout << "Area: " << figure->calculateArea() << ", ";
            std::cout << "Perimeter: " << figure->calculatePerimeter() << std::endl;
        }

        std::cout << std::endl << "Queue 2 (Triangle/Rectangle): " << std::endl;
        while (!queue2.isEmpty()) {
            Figure* figure = queue2.dequeue();
            std::cout << "Area: " << figure->calculateArea() << ", ";
            std::cout << "Perimeter: " << figure->calculatePerimeter() << std::endl;
        }

        std::cout << std::endl << "Queue 3 (Trapezia/Rectangle): " << std::endl;
        while (!queue3.isEmpty()) {
            Figure* figure = queue3.dequeue();
            std::cout << "Area: " << figure->calculateArea() << ", ";
            std::cout << "Perimeter: " << figure->calculatePerimeter() << std::endl;
        }

        std::cout << std::endl << "Queue 4 (Romb/Rectangle): " << std::endl;
        while (!queue4.isEmpty()) {
            Figure* figure = queue4.dequeue();
            std::cout << "Area: " << figure->calculateArea() << ", ";
            std::cout << "Perimeter: " << figure->calculatePerimeter() << std::endl;
        }
    }
    delete f1; delete f2; delete f3; delete f4; delete f5; delete f6; delete f7; delete f8; delete f9; delete f10;
    return 0;
}