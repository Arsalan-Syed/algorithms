#include <iostream>
#include "dynamic_array/dynamic_array.h"
#include "stack/array_stack.h"
#include "stack/linked_list_stack.h"

int main() {
    LinkedListStack lls;
    lls.push(2);
    std::cout<<lls.pop()<<std::endl;
/*
    linked_list list = new linked_list();
    list.insert_el(111);
    list.insert_el(222);
    list.delete_el(1);
    list.insert_el(333);
    list.print();
*/
 //    std::cout<<list.get_el(2);
    //
    //list.insert_el(333);


    /*
    dynamic_array arr;

    arr.insert_el(110);
    arr.insert_el(40);
    arr.insert_el(299);
    arr.insert_el(666);
    arr.insert_el(13);
    arr.insert_el(42);

    arr.delete_el(4);

    for(int i=0;i<5;i++){
        std::cout << arr.get_el(i) << std::endl;
    }
    */
    return 0;
}