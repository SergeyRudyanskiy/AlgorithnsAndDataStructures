#include <iostream>

#include "ImplementationStack.h"
#include "Sort_Select.hpp"
#include "Sort_Bubble.hpp"
#include "Sort_Insert.hpp"

#include "Display_Data.hpp"

template<typename T> 
struct MyStruct { T value; };


int main() {
    std::vector<int16_t> vi = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    std::vector<int16_t>::iterator result;

    std::cout << "\narray" << std::endl;
    print_array_element(vi.begin(), vi.end());

    vi = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_insert(vi.begin(), vi.end(), order_ascendant);
    sort_insert(vi.begin(), vi.end());
    std::cout << "\nsort_insert ascend" << std::endl;
    print_array_element(vi.begin(), vi.end());

    std::cout << "Hello World!\n";
}