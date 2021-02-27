#include <iostream>
#include <vector>

#pragma region SORTING_ALGORITHM_IMPLEMENTATION
#include "Display_Data.hpp"

#include "Sort_Bubble.hpp"

#include "Sort_Count.hpp"
#include "Sort_Count_Optimized.hpp"
#include "Sort_Count_Optimized_Map.hpp"

#include "Sort_Insert.hpp"

#include "Sort_Merge_Iterative.hpp"
#include "Sort_Merge_Recursive.hpp"

//TODO: implementaion of algorithm
#include "Sort_Quick_Iterative.hpp"
#include "Sort_Quick_Recursive.hpp"

#include "Sort_Radix_Binary_Least_Significant_Digit.hpp"
#include "Sort_Radix_Binary_Most_Significant_Digit.hpp"
#include "Sort_Radix_Decimal_Map.hpp"
#include "Sort_Radix_Decimal_Vector.hpp"

#include "Sort_Select.hpp"
#pragma endregion

#pragma region SEARCHING_ALGORITHM_IMPLEMENTATION
#include "Search_Element_Linear_Iterative.hpp"
#include "Search_Element_Linear_Recursive.hpp"

#include "Search_Element_Binary_Itarative.hpp"
#include "Search_Element_Binary_Iterative_Optimized.hpp"
#include "Search_Element_Binary_Recursive.hpp"

#include "Search_Element_Ternary_Iterative.hpp"
#include "Search_Element_Ternary_Recursive.hpp"

#include "Search_Element_Maximum.hpp"
#include "Search_Element_Minimum.hpp"
#include "Search_Element_Minimum_Maximum.hpp"
#pragma endregion

#pragma region FUNCTIONAL_OTHER
#include "Function_Odd_Even.hpp"
#include "Function_Bound_Lower.hpp"
#include "Function_Bound_Upper.hpp"
#include "Function_Calculate_Digit_Count.hpp"
#include "Function_Get_Signum.hpp"
#include "Function_Reverse.hpp"
#include "Function_Rotate.hpp"
#pragma endregion FUNCTIONAL_OTHER

//template testing region
//#pragma region Sort_
//    vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
//    std::cout << "\n vector befor sort" << std::endl;
//    print_data(vector_test.begin(), vector_test.end());
//
//    // comparator less
//    vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
//    sort_(vector_test.begin(), vector_test.end(), std::less<>{});
//    print_data(vector_test.begin(), vector_test.end());
//
//    vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
//    sort_(vector_test.begin(), vector_test.end());
//    print_data(vector_test.begin(), vector_test.end());
//
//    vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
//    sort_(vector_test, std::less<>{});
//    print_data(vector_test.begin(), vector_test.end());
//
//    vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
//    sort_(vector_test);
//    print_data(vector_test.begin(), vector_test.end());
//
//    //comparator greater
//    vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
//    sort_(vector_test.begin(), vector_test.end(), std::greater<>{});
//    print_data(vector_test.begin(), vector_test.end());
//
//    vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
//    sort_(vector_test, std::greater<>{});
//    print_data(vector_test.begin(), vector_test.end());
//#pragma endregion

int main() {
    std::vector<int16_t> vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
#pragma region Sort

#pragma region Sort_Bubble
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //std::cout << "\n vector befor sort" << std::endl;
    //print_data(vector_test.begin(), vector_test.end());
    //
    //// comparator less
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_bubble(vector_test.begin(), vector_test.end(), std::less<>{});
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_bubble(vector_test.begin(), vector_test.end());
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_bubble(vector_test, std::less<>{});
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_bubble(vector_test);
    //print_data(vector_test.begin(), vector_test.end());
    //
    ////comparator greater
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_bubble(vector_test.begin(), vector_test.end(), std::greater<>{});
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_bubble(vector_test, std::greater<>{});
    //print_data(vector_test.begin(), vector_test.end());
#pragma endregion

#pragma region Sort_Count
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //std::cout << "\n vector befor sort" << std::endl;
    //print_data(vector_test.begin(), vector_test.end());
    //
    //// comparator less
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_count(vector_test.begin(), vector_test.end(), std::less<>{});
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_count(vector_test.begin(), vector_test.end());
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_count(vector_test, std::less<>{});
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_count(vector_test);
    //print_data(vector_test.begin(), vector_test.end());
    //
    ////comparator greater
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_count(vector_test.begin(), vector_test.end(), std::greater<>{});
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_count(vector_test, std::greater<>{});
    //print_data(vector_test.begin(), vector_test.end());
#pragma endregion

#pragma region Sort_Count_Optimized
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //std::cout << "\n vector befor sort" << std::endl;
    //print_data(vector_test.begin(), vector_test.end());
    //
    //// comparator less
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_count_optimized(vector_test.begin(), vector_test.end());
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_count_optimized(vector_test);
    //print_data(vector_test.begin(), vector_test.end());
#pragma endregion

#pragma region Sort_Count_Optimized_Map
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //std::cout << "\n vector befor sort" << std::endl;
    //print_data(vector_test.begin(), vector_test.end());
    //
    //// comparator less
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_count_optimized_map(vector_test.begin(), vector_test.end(), std::less<>{});
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_count_optimized_map(vector_test.begin(), vector_test.end());
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_count_optimized_map(vector_test, std::less<>{});
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_count_optimized_map(vector_test);
    //print_data(vector_test.begin(), vector_test.end());
    //
    ////comparator greater
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_count_optimized_map(vector_test.begin(), vector_test.end(), std::greater<>{});
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_count_optimized_map(vector_test, std::greater<>{});
    //print_data(vector_test.begin(), vector_test.end());
#pragma endregion

#pragma region Sort_Insert
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //std::cout << "\n vector befor sort" << std::endl;
    //print_data(vector_test.begin(), vector_test.end());
    //
    //// comparator less
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_insert(vector_test.begin(), vector_test.end(), std::less<>{});
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_insert(vector_test.begin(), vector_test.end());
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_insert(vector_test, std::less<>{});
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_insert(vector_test);
    //print_data(vector_test.begin(), vector_test.end());
    //
    ////comparator greater
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_insert(vector_test.begin(), vector_test.end(), std::greater<>{});
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_insert(vector_test, std::greater<>{});
    //print_data(vector_test.begin(), vector_test.end());
#pragma endregion

#pragma region Sort_Merge_Iterative
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //std::cout << "\n vector befor sort" << std::endl;
    //print_data(vector_test.begin(), vector_test.end());
    //
    //// comparator less
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_merge_iterative(vector_test.begin(), vector_test.end(), std::less<>{});
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_merge_iterative(vector_test.begin(), vector_test.end());
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_merge_iterative(vector_test, std::less<>{});
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_merge_iterative(vector_test);
    //print_data(vector_test.begin(), vector_test.end());
    //
    ////comparator greater
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_merge_iterative(vector_test.begin(), vector_test.end(), std::greater<>{});
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_merge_iterative(vector_test, std::greater<>{});
    //print_data(vector_test.begin(), vector_test.end());
#pragma endregion

#pragma region Sort_Merge_Recursive
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //std::cout << "\n vector befor sort" << std::endl;
    //print_data(vector_test.begin(), vector_test.end());
    //
    //// comparator less
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_merge_recursive(vector_test.begin(), vector_test.end(), std::less<>{});
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_merge_recursive(vector_test.begin(), vector_test.end());
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_merge_recursive(vector_test, std::less<>{});
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_merge_recursive(vector_test);
    //print_data(vector_test.begin(), vector_test.end());
    //
    ////comparator greater
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_merge_recursive(vector_test.begin(), vector_test.end(), std::greater<>{});
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_merge_recursive(vector_test, std::greater<>{});
    //print_data(vector_test.begin(), vector_test.end());
#pragma endregion Sort

//TODO: IMPLEMENTATION
#pragma region Sort_Quick_Iterative
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //std::cout << "\n vector befor sort" << std::endl;
    //print_data(vector_test.begin(), vector_test.end());
    //
    //// comparator less
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_quick_iterative(vector_test.begin(), vector_test.end(), std::less<>{});
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_quick_iterative(vector_test.begin(), vector_test.end());
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_quick_iterative(vector_test, std::less<>{});
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_quick_iterative(vector_test);
    //print_data(vector_test.begin(), vector_test.end());
    //
    ////comparator greater
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_quick_iterative(vector_test.begin(), vector_test.end(), std::greater<>{});
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_quick_iterative(vector_test, std::greater<>{});
    //print_data(vector_test.begin(), vector_test.end());
#pragma endregion

#pragma region Sort_Quick_Recursive
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //std::cout << "\n vector befor sort" << std::endl;
    //print_data(vector_test.begin(), vector_test.end());
    //
    //// comparator less
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_quick_recursive(vector_test.begin(), vector_test.end(), std::less<>{});
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_quick_recursive(vector_test.begin(), vector_test.end());
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_quick_recursive(vector_test, std::less<>{});
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_quick_recursive(vector_test);
    //print_data(vector_test.begin(), vector_test.end());
    //
    ////comparator greater
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_quick_recursive(vector_test.begin(), vector_test.end(), std::greater<>{});
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_quick_recursive(vector_test, std::greater<>{});
    //print_data(vector_test.begin(), vector_test.end());
#pragma endregion

#pragma region Sort_Radix_Binary_Least_Significant_Digit
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //std::cout << "\n vector befor sort LSD" << std::endl;
    //print_data(vector_test.begin(), vector_test.end());
    //
    //// comparator less
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_radix_binary_lsd(vector_test.begin(), vector_test.end(), ComparatorRadixLess<int16_t>{});
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_radix_binary_lsd(vector_test.begin(), vector_test.end());
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_radix_binary_lsd(vector_test, ComparatorRadixLess<int16_t>{});
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_radix_binary_lsd(vector_test);
    //print_data(vector_test.begin(), vector_test.end());
    //
    ////comparator greater
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_radix_binary_lsd(vector_test.begin(), vector_test.end(), ComparatorRadixGreater<int16_t>{});
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_radix_binary_lsd(vector_test, ComparatorRadixGreater<int16_t>{});
    //print_data(vector_test.begin(), vector_test.end());
#pragma endregion

#pragma region Sort_Radix_Binary_Most_Significant_Digit
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //std::cout << "\n vector befor sort MSD" << std::endl;
    //print_data(vector_test.begin(), vector_test.end());
    //
    //// comparator less
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_radix_binary_msd(vector_test.begin(), vector_test.end(), ComparatorRadixLess<int16_t>{});
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_radix_binary_msd(vector_test.begin(), vector_test.end());
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_radix_binary_msd(vector_test, ComparatorRadixLess<int16_t>{});
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_radix_binary_msd(vector_test);
    //print_data(vector_test.begin(), vector_test.end());
    //
    //// comparator greater
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_radix_binary_msd(vector_test.begin(), vector_test.end(), ComparatorRadixGreater<int16_t>{});
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_radix_binary_msd(vector_test, ComparatorRadixGreater<int16_t>{});
    //print_data(vector_test.begin(), vector_test.end());
#pragma endregion

#pragma region Sort_Radix_Decimal_LSD_Map
   //vector_test = { -111, -5555, 0, -65, -31, -25, 45, 11, 0, 0, 57, 23, 91, -1111, 111, 62, -43, -1 };
   //std::cout << "\n vector befor sort" << std::endl;
   //print_data(vector_test.begin(), vector_test.end());
   //
   //// comparator less
   //vector_test = { -111, -5555, 0, -65, -31, -25, 45, 11, 0, 0, 57, 23, 91, -1111, 111, 62, -43, -1 };
   //sort_radix_decimal_lsd_map(vector_test.begin(), vector_test.end(), std::less<>{});
   //print_data(vector_test.begin(), vector_test.end());
   //
   //vector_test = { 0, -65, -31, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43, -1 };
   //sort_radix_decimal_lsd_map(vector_test.begin(), vector_test.end());
   //print_data(vector_test.begin(), vector_test.end());
   //
   //vector_test = { 0, -65, -31, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43, -1 };
   //sort_radix_decimal_lsd_map(vector_test, std::less<>{});
   //print_data(vector_test.begin(), vector_test.end());
   //
   //vector_test = { 0, -65, -31, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43, -1 };
   //sort_radix_decimal_lsd_map(vector_test);
   //print_data(vector_test.begin(), vector_test.end());
   //
   ///comparator greater
   //ector_test = { 0, -65, -31, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43, -1 };
   //ort_radix_decimal_lsd_map(vector_test.begin(), vector_test.end(), std::greater<>{});
   //rint_data(vector_test.begin(), vector_test.end());
   //
   //ector_test = { 0, -65, -31, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43, -1 };
   //ort_radix_decimal_lsd_map(vector_test, std::greater<>{});
   //rint_data(vector_test.begin(), vector_test.end());
#pragma endregion

#pragma region Sort_Radix_Decimal_LSD_Vector
   vector_test = { -111, -5555, 0, -65, -31, -25, 45, 11, 0, 0, 57, 23, 91, -1111, 111, 62, -43, -1 };
   std::cout << "\n vector befor sort" << std::endl;
   print_data(vector_test.begin(), vector_test.end());

   // comparator less
   vector_test = { -111, -5555, 0, -65, -31, -25, 45, 11, 0, 0, 57, 23, 91, -1111, 111, 62, -43, -1 };
   sort_radix_decimal_lsd_vector(vector_test.begin(), vector_test.end(), std::less<>{});
   print_data(vector_test.begin(), vector_test.end());

   //vector_test = { 0, -65, -31, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43, -1 };
   //sort_radix_decimal_lsd_vector(vector_test.begin(), vector_test.end());
   //print_data(vector_test.begin(), vector_test.end());
   //
   //vector_test = { 0, -65, -31, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43, -1 };
   //sort_radix_decimal_lsd_vector(vector_test, std::less<>{});
   //print_data(vector_test.begin(), vector_test.end());
   //
   //vector_test = { 0, -65, -31, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43, -1 };
   //sort_radix_decimal_lsd_vector(vector_test);
   //print_data(vector_test.begin(), vector_test.end());
   //
   ////comparator greater
   //vector_test = { 0, -65, -31, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43, -1 };
   //sort_radix_decimal_lsd_vector(vector_test.begin(), vector_test.end(), std::greater<>{});
   //print_data(vector_test.begin(), vector_test.end());
   //
   //vector_test = { 0, -65, -31, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43, -1 };
   //sort_radix_decimal_lsd_vector(vector_test, std::greater<>{});
   //print_data(vector_test.begin(), vector_test.end());
#pragma endregion

#pragma region Sort_Select
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //std::cout << "\n vector befor sort Select" << std::endl;
    //print_data(vector_test.begin(), vector_test.end());
    //
    //// comparator less
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_select(vector_test.begin(), vector_test.end(), std::less<>{});
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_select(vector_test.begin(), vector_test.end());
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_select(vector_test, std::less<>{});
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_select(vector_test);
    //print_data(vector_test.begin(), vector_test.end());
    //
    ////comparator greater
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_select(vector_test.begin(), vector_test.end(), std::greater<>{});
    //print_data(vector_test.begin(), vector_test.end());
    //
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_select(vector_test, std::greater<>{});
    //print_data(vector_test.begin(), vector_test.end());
#pragma endregion
#pragma endregion Sort

#pragma region Search
    //vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //std::vector<int16_t>::iterator result;

#pragma region Search_Linear
    // Tested linear
    //std::cout << "Linear" << std::endl;
    //result = search_element_linear_iterative(vector_test.begin(), vector_test.end(), -25);
    //std::cout << (result == vector_test.end() ? -1 : *result) << "" << std::endl;
    //result = search_element_linear_iterative(vector_test.begin(), vector_test.end(), 555);
    //std::cout << (result == vector_test.end() ? -1 : *result) << "" << std::endl;
    // 
    //result = search_element_linear_recursive(vector_test.begin(), vector_test.end(), -43);
    //std::cout << (result == vector_test.end() ? -1 : *result) << "" << std::endl;
    //result = search_element_linear_recursive(vector_test.begin(), vector_test.end(), 555);
    //std::cout << (result == vector_test.end() ? -1 : *result) << "" << std::endl;
#pragma endregion Search_Linear
    
#pragma region Search_Binary
    //// binary
    //std::sort(vector_test.begin(), vector_test.end());
    //std::cout << "Binary" << std::endl;
    //result = search_element_binary_iterative(vector_test.begin(), vector_test.end(), -43);
    //std::cout << (result == vector_test.end() ? -1 : *result) << "" << std::endl;
    //result = search_element_binary_iterative(vector_test.begin(), vector_test.end(), 555);
    //std::cout << (result == vector_test.end() ? -1 : *result) << "" << std::endl;

    //result = search_element_binary_iterative_optimized(vector_test.begin(), vector_test.end(), -43);
    //std::cout << (result == vector_test.end() ? -1 : *result) << "" << std::endl;
    //result = search_element_binary_iterative_optimized(vector_test.begin(), vector_test.end(), 555);
    //std::cout << (result == vector_test.end() ? -1 : *result) << "" << std::endl;
    
    //result = search_element_binary_recursive(vector_test.begin(), vector_test.end(), 91);
    //std::cout << (result == vector_test.end() ? -1 : *result) << "" << std::endl;
    //result = search_element_binary_recursive(vector_test.begin(), vector_test.end(), 5);
    //std::cout << (result == vector_test.end() ? -1 : *result) << "" << std::endl;
#pragma endregion Search_Binary

#pragma region Search_Ternary
    // ternary
    //std::sort(vector_test.begin(), vector_test.end());
    //std::cout << "Ternary" << std::endl;
    //result = search_element_ternary_iterative(vector_test.begin(), vector_test.end(), 62);
    //std::cout << (result == vector_test.end() ? -1 : *result) << "" << std::endl;
    //result = search_element_ternary_iterative(vector_test.begin(), vector_test.end(), 63);
    //std::cout << (result == vector_test.end() ? -1 : *result) << "" << std::endl;
    //
    //result = search_element_ternary_recursive(vector_test.begin(), vector_test.end(), 91);
    //std::cout << (result == vector_test.end() ? -1 : *result) << "" << std::endl;
    //result = search_element_ternary_recursive(vector_test.begin(), vector_test.end(), 58);
    //std::cout << (result == vector_test.end() ? -1 : *result) << "" << std::endl;
#pragma endregion Search_Ternary

#pragma region Search_Minimum_And_Maximum
    //// tested minimum and maximum
    //std::cout << "Minimum and Maximum" << std::endl;
    //result = search_element_minimum(vector_test.begin(), vector_test.end());
    //std::cout << *result << "" << std::endl;
    //result = search_element_maximum(vector_test.begin(), vector_test.end());
    //std::cout << *result << "" << std::endl;
    //std::pair<std::vector<int16_t>::iterator, std::vector<int16_t>::iterator> res;
    //res = search_element_maximum_minimum(vector_test.begin(), vector_test.end());
    //std::cout << *res.first << " " << *res.second << std::endl;
#pragma endregion Search_Minimum_And_Maximum
#pragma endregion Search

#pragma region Functional

#pragma endregion Functional


    std::cout << std::endl;
    return 0;
}