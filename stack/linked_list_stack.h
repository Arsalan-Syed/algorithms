//
// Created by arsal on 18/06/2019.
//


#include "../linked_list/linked_list.h"

class LinkedListStack{
public:
    void push(int x);
    int pop();
private:
    linked_list list;
    int stackCounter = 0;
};