#include <iostream>
#include <vector>

#include "Display_Data.hpp"
#include "Sort_Count_Optimized.hpp"

int main() {
    std::vector<int16_t> vi = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    std::cout << "\narray" << std::endl;
    print_data(vi.begin(), vi.end());

    //sort_count(vi.begin(), vi.end(), std::less<std::vector<int16_t>::value_type>{});

    sort_count(vi, std::greater<std::vector<int16_t>::value_type>());
    std::cout << "\n\nsorted array" << std::endl;
    print_data(vi);

    //std::vector<int16_t>::iterator a, b;
    //std::tie(a, b) = search_element_maximum_minimum(vi.begin(), vi.end());
    //std::cout << *a << " " << *b << std::endl;

    std::cout << "Hello World!\n";
}