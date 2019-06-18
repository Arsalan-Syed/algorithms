//
// Created by arsal on 17/06/2019.
//

struct node{
    int data;
    node *next;
};

class linked_list{
public:
    void insert_el(int x);
    void delete_el(int idx);
    int get_el(int idx);
    void print();

    linked_list();
    ~linked_list();
private:
    node *head; //start of the list
    int numElements = 0;


};
