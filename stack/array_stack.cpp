//
// Created by arsal on 18/06/2019.
//

#include "array_stack.h"

void Stack::push(int x) {
    this->data[stackCounter] = x;
    stackCounter++;
}

int Stack::pop() {
    int value = data[stackCounter];
    stackCounter--;
    return value;
}

Stack::Stack() = default;

Stack::~Stack() = default;
