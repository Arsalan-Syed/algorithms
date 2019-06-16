#include <iostream>
#include "dynamic_array.h"

int main() {
    dynamic_array arr;

    arr.insert_el(110);
    arr.insert_el(40);
    arr.insert_el(299);
    arr.insert_el(666);
    arr.insert_el(13);
    arr.insert_el(42);

    for(int i=0;i<6;i++){
        std::cout << arr.get_el(i) << std::endl;
    }

    return 0;
}