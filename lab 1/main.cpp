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

    Circle circle1(5);
    Circle circle2(7);
    Rectangle rectangle1(4, 6);
    Rectangle rectangle2(3, 9);

    queue1.enqueue(&circle1);
    queue1.enqueue(&circle2);
    queue1.enqueue(&rectangle1);
    queue1.enqueue(&rectangle2);

    Triangle triangle1(5, 8, 7, 7, 8);
    Triangle triangle2(6, 9, 6, 9, 10);
    queue2.enqueue(&triangle1);
    queue2.enqueue(&triangle2);

    queue2.enqueue(&rectangle1);
    queue2.enqueue(&rectangle2);

    Trapezia trapezium1(4, 7, 5, 4, 5);
    Trapezia trapezium2(5, 9, 6, 7, 8);
    queue3.enqueue(&trapezium1);
    queue3.enqueue(&trapezium2);

    queue3.enqueue(&rectangle1);
    queue3.enqueue(&rectangle2);

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
    }

    return 0;
}