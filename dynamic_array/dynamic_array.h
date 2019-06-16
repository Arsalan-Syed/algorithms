//
// Created by arsal on 16/06/2019.
//

class dynamic_array {

public:
    void insert_el(int x);
    void delete_el(int x);
    int get_el(int i);
    dynamic_array();
    ~dynamic_array();
private:
    int *array;
    int current_idx = 0;
    int array_capacity = 1;
};

