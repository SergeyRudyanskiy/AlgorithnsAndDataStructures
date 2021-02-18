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
//#include "Sort_Quick_Iterative.hpp"
#include "Sort_Quick_Recursive.hpp"

#include "Sort_Radix_Binary_Least_Significant_Digit.hpp"
#include "Sort_Radix_Binary_Most_Significant_Digit.hpp"
#include "Sort_Radix_Decimal.hpp"

#include "Sort_Select.hpp"
#pragma endregion


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
#pragma endregion

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

#pragma region Sort_Radix_Decimal_MSD
    vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    std::cout << "\n vector befor sort" << std::endl;
    print_data(vector_test.begin(), vector_test.end());
    
    // comparator less
    vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    sort_radix_decimal(vector_test.begin(), vector_test.end(), std::less<>{});
    print_data(vector_test.begin(), vector_test.end());
    
    vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    sort_radix_decimal(vector_test.begin(), vector_test.end());
    print_data(vector_test.begin(), vector_test.end());
    
    vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    sort_radix_decimal(vector_test, std::less<>{});
    print_data(vector_test.begin(), vector_test.end());
    
    vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    sort_radix_decimal(vector_test);
    print_data(vector_test.begin(), vector_test.end());
    
    //comparator greater
    vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    sort_radix_decimal(vector_test.begin(), vector_test.end(), std::greater<>{});
    print_data(vector_test.begin(), vector_test.end());
    
    vector_test = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    sort_radix_decimal(vector_test, std::greater<>{});
    print_data(vector_test.begin(), vector_test.end());
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

    std::cout << std::endl;
    return 0;
}