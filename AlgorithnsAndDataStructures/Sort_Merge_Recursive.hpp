#pragma once
#include "Helper_Sort.hpp"
#include <functional>
#include <vector>
#include <type_traits>

template<typename Iterator>
void function_merge(Iterator iterator_begin, Iterator iterator_midle, Iterator iterator_end, bool (*function_comparation)(const Iterator, const Iterator)) {
    std::vector<typename std::iterator_traits<Iterator>::value_type> range_left(iterator_begin, iterator_midle); //std::make_move_iterator(it) && range.reserve(std::distance(begin, end)) ??
    Iterator iterator_left_current = range_left.begin();

    std::vector<typename std::iterator_traits<Iterator>::value_type> range_right(iterator_midle, iterator_end);  //std::make_move_iterator(it) && range.reserve(std::distance(begin, end)) ??
    Iterator iterator_right_current = range_right.begin();

    while(iterator_left_current != range_left.end() && iterator_right_current != range_right.end()) {
        *iterator_begin++ = std::move(function_comparation(iterator_right_current, iterator_left_current) ? *iterator_left_current++ : *iterator_right_current++);
    }

    while (iterator_left_current < range_left.end()) { 
        *iterator_begin++ = std::move(*iterator_left_current++);  // iterator_begin++ = std::iter_move(iterator_left_current++);
    }

    while (iterator_right_current < range_right.end()) {
        *iterator_begin++ = std::move(*iterator_right_current++); // iterator_begin++ = std::iter_move(iterator_left_current++);
    }
}

template<typename Iterator>
void sort_merge_recursive(Iterator iterator_begin, Iterator iterator_end, bool (*function_comparation)(const Iterator, const Iterator)) {
	if (iterator_begin == iterator_end || iterator_begin + 1 == iterator_end) { return; }
    //static const auto f_compare = function_comparation;

    Iterator iterator_midle = iterator_begin + (iterator_end - iterator_begin) / 2;
    sort_merge_recursive(iterator_begin, iterator_midle, function_comparation);
    sort_merge_recursive(iterator_midle, iterator_end, function_comparation);
    function_merge(iterator_begin, iterator_midle, iterator_end, function_comparation);
}

template<typename Iterator>
void sort_merge_recursive(Iterator iterator_begin, Iterator iterator_end) {
    sort_merge_recursive(iterator_begin, iterator_end, order_ascendant);
}