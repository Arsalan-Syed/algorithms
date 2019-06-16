//
// Created by arsal on 16/06/2019.
//

#include "dynamic_array.h"

void dynamic_array::insert_el(int x) {
    if(current_idx >= array_capacity){
        int *new_array = new int[array_capacity*2];

        //Copy all old elements to new array
        for(int i=0;i < array_capacity;i++){
            new_array[i] = array[i];
        }

        array = new_array;
        array_capacity = 2*array_capacity;
    }

    array[current_idx] = x;
    current_idx ++;
}

void dynamic_array::delete_el(int x) {

}

int dynamic_array::get_el(int i) {
    if(i < array_capacity){
        return array[i];
    } else{
        throw "Index is out of bounds";
    }
}

dynamic_array::dynamic_array() {
    array = new int[array_capacity];
}

dynamic_array::~dynamic_array() {
    delete array;
}
