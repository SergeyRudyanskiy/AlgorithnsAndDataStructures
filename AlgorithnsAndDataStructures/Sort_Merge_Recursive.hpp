#pragma once
#include "Helper_Sort.hpp"
#include <functional>
#include <vector>
#include <type_traits>

template<typename Iterator>
void function_merge(Iterator iterator_begin, Iterator iterator_midle, Iterator iterator_end) {
    std::vector<typename std::iterator_traits<Iterator>::value_type> range_left(iterator_begin, iterator_midle);
    //range_left.reserve(iterator_midle - iterator_begin);
    //std::cout << "\n" << range_left.size() << " " << range_left.capacity() << "\n";
    Iterator it_left_current = range_left.begin();

    std::vector<typename std::iterator_traits<Iterator>::value_type> range_right(iterator_midle, iterator_end);
    //range_right.reserve(iterator_end - iterator_midle);
    Iterator it_right_current = range_right.begin();

    while(it_left_current != range_left.end() && it_right_current != range_right.end()) {
        *iterator_begin++ = (*it_left_current <= *it_right_current) ? *it_left_current++ : *it_right_current++;

        //if (*it_left_current <= *it_right_current) {
        //    *iterator_begin = *it_left_current;
        //    ++it_left_current;
        //}
        //else {
        //    *iterator_begin = *it_right_current;
        //    ++it_right_current;
        //}
        //++iterator_begin;
    }

    while (it_left_current < range_left.end()) {
        *iterator_begin++ = *it_left_current++;
        //++iterator_begin;
        //++it_left_current;
    }

    while (it_right_current < range_right.end()) {
        *iterator_begin++ = *it_right_current++;
        //++iterator_begin;
        //++it_right_current;
    }
}

template<typename Iterator>
void sort_merge_recursive(Iterator iterator_begin, Iterator iterator_end) {
	if (iterator_begin == iterator_end || iterator_begin + 1 == iterator_end) { return; }
    //static const auto f_comare = function_comparation;

    Iterator iterator_midle = iterator_begin + (iterator_end - iterator_begin) / 2;
    sort_merge_recursive(iterator_begin, iterator_midle);
    sort_merge_recursive(iterator_midle, iterator_end);
    function_merge(iterator_begin, iterator_midle, iterator_end);
}

//template<typename Iterator>
//void sort_merge_recursive(Iterator iterator_begin, Iterator iterator_end) {
//    sort_merge_recursive(iterator_begin, iterator_end, order_ascendant);
//}

//template<typename It>
//std::vector<typename It::value_type> merge(const It it_begin, const It it_midle, const It it_end) {
//    std::vector<typename It::value_type> v;
//    It it_left{ it_begin }, it_right{ it_midle + 1 };
//
//    while (it_left != it_midle && it_right != it_end){
//        v.push_back((*it_left <= *it_right) ? *it_left++ : *it_right++);
//    }
//
//    v.insert(v.end(), it_left, it_midle);
//    v.insert(v.end(), it_right, it_end);
//
//    return std::move(v);
//}