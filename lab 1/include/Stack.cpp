#include <iostream>
#include "Element.h"
#include "Stack.h"

Stack::Stack() {
    top = nullptr;
}

Stack::~Stack() {
    while (!IsEmpty()) {
        Pop();
    }
}

bool Stack::IsEmpty() const {
    return top == nullptr;
}

void Stack::Push(Element* e) {
    if (e == nullptr)
        return;
    e->prev = top;
    if (top != nullptr)
        top->next = e;
    top = e;
    std::cout << "Element " << e->value << " pushed to stack" << std::endl;
}

Element* Stack::Pop() {
    if (IsEmpty()) {
        std::cout << "Stack is empty" << std::endl;
        return nullptr;
    }

    Element* temp = top;
    top = top->prev;
    if (top != nullptr)
        top->next = nullptr;
    temp->prev = nullptr;
    std::cout << "Element " << temp->value << " popped from stack" << std::endl;
    return temp;
}

void Stack::PrintSum() const {
    if (IsEmpty()) {
        std::cout << "Stack is empty" << std::endl;
        return;
    }

    int sum = 0;
    Element* current = top;
    while (current != nullptr) {
        sum += current->value;
        current = current->prev;
    }

    std::cout << "Sum of all elements: " << sum << std::endl;
}

void Stack::PrintProduct() const {
    if (IsEmpty()) {
        std::cout << "Stack is empty" << std::endl;
        return;
    }

    int product = 1;
    Element* current = top;
    while (current != nullptr) {
        product *= current->value;
        current = current->prev;
    }

    std::cout << "Product of all elements: " << product << std::endl;
}

void Stack::PrintSumThree() const {
    if (IsEmpty()) {
        std::cout << "Stack is empty" << std::endl;
        return;
    }

    int sum = 0;
    int countToSum = 0;
    Element* current = top;
    while (current != nullptr && countToSum < 3) {
        sum += current->value;
        current = current->prev;
        countToSum++;
    }

    std::cout << "Sum of the first three elements (or all elements if there are fewer than three): " << sum << std::endl;
}

void Stack::PrintProductThree() const {
    if (IsEmpty()) {
        std::cout << "Stack is empty" << std::endl;
        return;
    }

    int product = 1;
    int countToProduct = 0;
    Element* current = top;
    while (current != nullptr && countToProduct < 3) {
        product *= current->value;
        current = current->prev;
        countToProduct++;
    }

    if (countToProduct < 3) {
        std::cout << "Not enough elements to calculate the product" << std::endl;
    } else {
        std::cout << "Product of the first three elements: " << product << std::endl;
    }
}

void Stack::PrintSumOdd() const {
    if (IsEmpty()) {
        std::cout << "Stack is empty" << std::endl;
        return;
    }

    int sum = 0;
    Element* current = top;
    while (current != nullptr) {
        if (current->value % 2 != 0) {
            sum += current->value;
        }
        current = current->prev;
    }

    if (sum == 0) {
        std::cout << "No odd elements in the stack" << std::endl;
    } else {
        std::cout << "Sum of all odd elements: " << sum << std::endl;
    }
}