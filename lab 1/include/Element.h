#pragma once

#include <iostream>

class Element
{
public:
    Element* prev;
    Element* next;
    int value;
    Element() { prev = NULL; next = NULL; value = 0; };
};