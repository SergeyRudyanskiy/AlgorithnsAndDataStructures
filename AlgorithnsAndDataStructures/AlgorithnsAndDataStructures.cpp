#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>

#include "Display_Data.hpp"
#include "Sort_Bubble.hpp"
#include "Sort_Insert.hpp"
#include "Sort_Merge_Iterative.hpp"
#include "Sort_Merge_Recursive.hpp"
#include "Sort_Select.hpp"
#include "Function_Rotate.hpp"
#include "Sort_Quick_Recursive.hpp"
#include "Search_Element_Minimum_Maximum.hpp"
#include "Sort_Count.hpp"

int main() {
    std::vector<int16_t> vi = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    std::cout << "\narray" << std::endl;
    print_data(vi.begin(), vi.end());

    sort_count(vi.begin(), vi.end());
    std::cout << "\n\nsorted array" << std::endl;
    print_data(vi);

    //std::vector<int16_t>::iterator a, b;
    //std::tie(a, b) = search_element_maximum_minimum(vi.begin(), vi.end());
    //std::cout << *a << " " << *b << std::endl;

    std::cout << "Hello World!\n";
}