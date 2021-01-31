#include <iostream>
#include <vector>

#include "Display_Data.hpp"
#include "Sort_Bubble.hpp"
#include "Sort_Insert.hpp"
#include "Sort_Merge_Iterative.hpp"
#include "Sort_Merge_Recursive.hpp"
#include "Sort_Select.hpp"
#include "Function_Rotate.hpp"
#include "Sort_Quick_Recursive.hpp"

int main() {
    std::vector<int16_t> vi = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    std::vector<int16_t>::iterator result;

    std::cout << "\narray" << std::endl;
    print_data(vi.begin(), vi.end());

    vi = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    sort_select(vi.begin(), vi.end());
    print_data(vi);

    std::cout << "Hello World!\n";
}