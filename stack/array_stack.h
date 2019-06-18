//
// Created by arsal on 18/06/2019.
//

class Stack{
public:
    void push(int x);
    int pop();
    Stack();
    ~Stack();
private:
    int data[10];
    int stackCounter = 0;
};