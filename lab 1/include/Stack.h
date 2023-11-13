#ifndef STACK_H
#define STACK_H

#include "Element.h"

class Stack {
    Element* top;

public:
    Stack();
    ~Stack();

    bool IsEmpty() const;
    void Push(Element* e);
    Element* Pop();

    void PrintSum() const;
    void PrintProduct() const;
    void PrintSumThree() const;
    void PrintProductThree() const;
    void PrintSumOdd() const;
};

#endif