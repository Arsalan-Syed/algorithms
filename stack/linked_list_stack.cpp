//
// Created by arsal on 18/06/2019.
//

#include "linked_list_stack.h"

void LinkedListStack::push(int x) {
    list.insert_el(x);
}

int LinkedListStack::pop() {
    int value = list.get_el(stackCounter);
    list.delete_el(stackCounter);
    return value;
}

