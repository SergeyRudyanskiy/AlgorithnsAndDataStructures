#include <iostream>
//#include "header_template.hpp"
#include "HeaderTemplateFunctionTested.hpp"

#include "ImplementationStack.h"
#include "Sort_Select.hpp"
#include "Sort_Bubble.hpp"
#include "Sort_Insert.hpp"

template<typename T> 
struct MyStruct { T value; };


int main() {
    std::vector<int16_t> vi = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    std::vector<int16_t>::iterator result;


    std::cout << "\narray" << std::endl;
    print_array_element(vi.begin(), vi.end());

    //sort_bubble(vi.begin(), vi.end(), order_descendant<int16_t>);
    //std::cout << "\nsort decrease" << std::endl;
    //print_array_element(vi.begin(), vi.end());

    //vi = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    ////sort_bubble(vi.begin(), vi.end(), order_ascendant<int16_t>);
    //selection_sort(vi.begin(), vi.end());
    //
    //std::cout << "\nsort increase" << std::endl;
    //print_array_element(vi.begin(), vi.end());
    //
    //vi = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_bubble(vi.begin(), vi.end(), order_ascendant);
    //std::cout << "\nsort_bubble ascend" << std::endl;
    //print_array_element(vi.begin(), vi.end());
    //
    //vi = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_bubble(vi.begin(), vi.end(), order_descendant);
    //std::cout << "\nsort_bubble descend" << std::endl;
    //print_array_element(vi.begin(), vi.end());

    //vi = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_select(vi.begin(), vi.end(), order_ascendant);
    //std::cout << "\nsort_select ascend" << std::endl;
    //print_array_element(vi.begin(), vi.end());
    //
    //vi = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_select(vi.begin(), vi.end(), order_descendant);
    //std::cout << "\nsort_select descend" << std::endl;
    //print_array_element(vi.begin(), vi.end());

    vi = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //sort_insert(vi.begin(), vi.end(), order_ascendant);
    sort_insert(vi.begin(), vi.end());
    std::cout << "\nsort_insert ascend" << std::endl;
    print_array_element(vi.begin(), vi.end());


    {
       //result = search_binary_recursive(vi.begin(), vi.end(), 11);
       //if (result != vi.end()) {
       //    std::cout << *result << " index = " << result - vi.begin() << std::endl;
       //}
       //else {
       //    std::cout << " no such element " << std::endl;
       //}
       //
       //result = search_binary_recursive(vi.begin(), vi.end(), 3);
       //if (result != vi.end()) {
       //    std::cout << *result << " index = " << result - vi.begin() << std::endl;
       //}
       //else {
       //    std::cout << " no such element " << std::endl;
       //}
    }

    //ImplementationStack<int> stack(8);
    //stack.push(1);
    //stack.push(2);
    //stack.push(3);
    //stack.push(4);
    //stack.push(5);
    //std::cout << stack.peak();
    //stack.display();

    //result = search_element_linear(vi.begin(), vi.end(), 3);
    //if (result != vi.end()) {
    //    std::cout << *result << " index = " << result - vi.begin() << std::endl;
    //} 
    //else {
    //    std::cout << " no such element " << std::endl;
    //}
    //
    //result = search_element_linear(vi.begin(), vi.end(), -43);
    //if (result != vi.end()) {
    //    std::cout << *result << " index = " << result - vi.begin() << std::endl;
    //}
    //else {
    //    std::cout << " no such element " << std::endl;
    //}
    //
    //int arr[] = { 0, -25, 45, 11, 0, 0, 57, 23, 91, 111, 62, -43 };
    //print_array_element(arr, arr + std::size(arr));
    //
    //std::cout << *(search_element_maximum(vi.begin(), vi.end())) << std::endl;
    //std::cout << *(search_element_minimum(vi.begin(), vi.end())) << std::endl;
    //
	//
    //MyStruct<int16_t> a{ 8 }, b{ -13 };
    //swap(a, b);
    //std::cout << a.value << " " << b.value << std::endl;



    std::cout << "Hello World!\n";
}