//
// Created by nequamy on 29.10.2023.
//
#include "Queue.h"
void Queue::enqueue(Figure* figure) {
    queue.push_back(figure);
}

Figure* Queue::dequeue() {
    if (!isEmpty()) {
        Figure* front = queue.front();
        queue.pop_front();
        return front;
    } else {
        return nullptr;
    }
}

bool Queue::isEmpty() const {
    return queue.empty();
}

int Queue::getSize() const {
    return queue.size();
}
