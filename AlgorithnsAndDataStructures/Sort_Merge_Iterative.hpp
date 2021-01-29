#pragma once

#include "Helper_Sort.hpp"

#include <vector>
#include <functional>
#include <type_traits>

template<typename Iterator, typename Comparator>
void function_merge_two_way(Iterator iterator_begin, Iterator iterator_midle, Iterator iterator_end, Comparator function_comparation) {
    std::vector<typename std::iterator_traits<Iterator>::value_type> range_left(iterator_begin, iterator_midle); //std::make_move_iterator(it) && range.reserve(std::distance(begin, end)) ??
    Iterator iterator_left_current = range_left.begin();

    std::vector<typename std::iterator_traits<Iterator>::value_type> range_right(iterator_midle, iterator_end);  //std::make_move_iterator(it) && range.reserve(std::distance(begin, end)) ??
    Iterator iterator_right_current = range_right.begin();

    while (iterator_left_current != range_left.end() && iterator_right_current != range_right.end()) {
        *iterator_begin++ = std::move(function_comparation(*iterator_left_current, *iterator_right_current) ? *iterator_left_current++ : *iterator_right_current++);
    }

    while (iterator_left_current < range_left.end()) {
        *iterator_begin++ = std::move(*iterator_left_current++);  // since c++20 -> iterator_begin++ = std::iter_move(iterator_left_current++);
    }

    while (iterator_right_current < range_right.end()) {
        *iterator_begin++ = std::move(*iterator_right_current++); // iterator_begin++ = std::iter_move(iterator_left_current++);
    }
}

template<typename Iterator, typename Comparator>
void sort_merge_iterative(const Iterator iterator_begin, const Iterator iterator_end, Comparator function_comparation) {
    if (iterator_begin == iterator_end || iterator_begin + 1 == iterator_end) { return; }

    for (auto curent_size_partition = 1; curent_size_partition < iterator_end - iterator_begin; curent_size_partition *= 2) {
        for (auto curent_index = 0; curent_index + curent_size_partition < iterator_end - iterator_begin; curent_index += 2 * curent_size_partition) { // revrite for iterator
            //Iterator iterator_partition_begin = iterator_begin;
            //iterator_partition_begin != iterator_end;
            //iterator_partition_begin = std::next(iterator_partition_begin, 2 * curent_size_partition);

            Iterator iterator_partition_begin = std::next(iterator_begin, curent_index);
            Iterator iterator_partiton_midle  = std::next(iterator_begin, curent_index + curent_size_partition);
            Iterator iterator_partition_end   = std::next(iterator_begin, std::min(curent_index + 2 * curent_size_partition, iterator_end - iterator_begin));

            function_merge_two_way(iterator_partition_begin, iterator_partiton_midle, iterator_partition_end, function_comparation);
        }
    }
}

template<typename Iterator>
void sort_merge_iterative(Iterator iterator_begin, Iterator iterator_end) {
    sort_merge_iterative(iterator_begin, iterator_end, std::less<typename std::iterator_traits<Iterator>::value_type>{});
}