#include "Queue.h"
#include <iostream>

Queue::Queue(void)
{
    first = 0;
    last = 0;
    count = 0;
}

Queue::~Queue(void){}

void Queue::Put(Element* e)
{
    if (e == 0)
        return;
    e->prev = last;

    if (count < 1)
    {
        last = e;
        first = e;
    }

    last->next = e;
    last = e;
    count++;
    std::cout << "Element " << e->value << " added to queue" << std::endl;
}

Element* Queue::Get()
{
    Element* e;

    if (first == 0)
        return 0;
    e = first;
    first = first->next;
    first->prev = 0;
    e->next = 0;
    count--;
    std::cout << "Element " << e->value << "removed from queue" << std::endl;
    return e;
}

void Queue::Print()
{
    if(count < 1)
    {
        std::cout << "Queue is empty";
        return;
    }

    Element* e;
    e = first;
    while(e != 0)
    {
        std::cout << e->value << ", ";
        e = e->next;
    }
    std::cout << std::endl;
}

void Queue::PrintSum()
{
    if(count < 1)
    {
        std::cout << "Queue is empty" << std::endl;
        return;
    }

    int sum = 0;
    Element* e = first;
    while(e != 0)
    {
        sum += e->value;
        e = e->next;
    }

    std::cout << "Sum of all elements: " << sum << std::endl;
}

void Queue::PrintSumThree()
{
    if(count < 1)
    {
        std::cout << "Queue is empty" << std::endl;
        return;
    }

    int sum = 0;
    Element* e = first;
    int countToSum = std::min(3, count);

    for(int i = 0; i < countToSum; i++)
    {
        sum += e->value;
        e = e->next;
    }

    std::cout << "Sum of the first three elements (or all elements if there are fewer than three): " << sum << std::endl;
}

void Queue::PrintSumEven()
{
    if (count < 1) {
        std::cout << "Queue is empty" << std::endl;
        return;
    }

    int sum = 0;
    Element* e = first;

    while (e != nullptr) {
        if (e->value % 2 == 0) {
            sum += e->value;
        }
        e = e->next;
    }

    if (sum == 0) {
        std::cout << "No even elements in the queue" << std::endl;
    } else {
        std::cout << "Sum of all even elements: " << sum << std::endl;
    }
}

void Queue::PrintProduct()
{
    if(count < 1)
    {
        std::cout << "Queue is empty" << std::endl;
        return;
    }

    int product = 1;
    Element* e = first;
    while(e != 0)
    {
        product *= e->value;
        e = e->next;
    }

    std::cout << "Product of all elements: " << product << std::endl;
}

void Queue::PrintProductThree()
{
    if (count < 3) {
        std::cout << "Not enough elements to calculate the product" << std::endl;
        return;
    }

    int product = 1;
    Element* e = first;

    for (int i = 0; i < 3; i++) {
        product *= e->value;
        e = e->next;
    }

    std::cout << "Product of the first three elements: " << product << std::endl;
}

