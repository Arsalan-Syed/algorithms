//
// Created by arsal on 17/06/2019.
//

#include <iostream>
#include "linked_list.h"


linked_list::linked_list() {
    head = nullptr;
}

linked_list::~linked_list() = default;

void linked_list::insert_el(int x) {
    node* new_node = new node{
            x,
            nullptr
    };

    if(head == nullptr){
        this->head = new_node;
    } else{
        node *head_copy = this->head;
        while(head_copy->next != nullptr){
            head_copy = head_copy->next;
        }
        head_copy->next = new_node;
    }
}

void linked_list::print(){
    node *head_copy = this->head;

    std::cout << head_copy->data << std::endl;
    while(head_copy->next != nullptr){
        head_copy = head_copy->next;
        std::cout << head_copy->data << std::endl;
    }
}

int linked_list::get_el(int idx) {
    node *head_copy = this->head;
    for(int i=0;i<idx;i++){
        head_copy = head_copy->next;
    }
    return head_copy->data;
}

void linked_list::delete_el(int idx) {
    if(idx==0){
        this->head = this->head->next;
    } else{
        node *prev = this->head;
        node *curr = prev->next;

        for(int i=1;i<idx;i++){
            prev = prev->next;
            curr = curr->next;
        }
        if(curr->next == nullptr){
            prev->next = nullptr;
        } else{
            prev->next = curr->next;
        }

    }
}
