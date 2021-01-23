#include <iostream>
#include <vector>
#include <iterator>
#include <type_traits>
#include <typeinfo>

#include "Display_Data.hpp"
#include "Sort_Merge_Recursive.hpp"

int main() {
    std::vector<int16_t> vi = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    std::vector<int16_t>::iterator result;

    std::cout << "\narray" << std::endl;
    print_array_element(vi.begin(), vi.end());

    vi = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_insert(vi.begin(), vi.end(), order_ascendant);
    //sort_insert(vi.begin(), vi.end());
    //sort_merge_recursive(vi.begin(), vi.end());
    //std::cout << "\nsort_insert ascend" << std::endl;
    //print_array_element(vi.begin(), vi.end());

    std::vector<int16_t>::iterator a = vi.begin();

    std::vector<int16_t> vt = { 0, 5, 8, 58, 100, 0, 1, 3, } ;

    function_merge(vt.begin(), vt.begin() + 5, vt.end());
    
    print_array_element(vt.begin(), vt.end());
    sort_merge_recursive(vi.begin(), vi.end());
    print_array_element(vi.begin(), vi.end());

    std::cout << "Hello World!\n";
}