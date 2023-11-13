//
// Created by nequamy on 29.10.2023.
//

#ifndef ALGORITHMS_QUEUE_H
#define ALGORITHMS_QUEUE_H
#include <deque>
#include "Figure.h"

class Queue {
public:
    void enqueue(Figure* figure);
    Figure* dequeue();
    bool isEmpty() const;
    int getSize() const;
private:
    std::deque<Figure*> queue;
};
#endif //ALGORITHMS_QUEUE_H
