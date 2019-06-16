//
// Created by arsal on 16/06/2019.
//

class dynamic_array {

public:
    //Inserts element at end of array
    void insert_el(int x);

    //Deletes element at index i
    void delete_el(int idx);

    //Retrieves element at index i
    int get_el(int idx);

    dynamic_array();
    ~dynamic_array();

private:
    int *array;

    //Number of elements currently stored in array
    int num_elements = 0;

    //Max number of elements in array
    int array_capacity = 1;
};

