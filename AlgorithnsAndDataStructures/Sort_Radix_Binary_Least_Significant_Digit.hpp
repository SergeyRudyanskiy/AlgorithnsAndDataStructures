#pragma once
#include <algorithm>
#include <iterator>
#include <type_traits>

#include "Sort_Radix_Binary_Comparator_Class.hpp"

// Least significant digit radix sort
template <typename Iterator, typename Comparator = typename ComparatorRadixLess<typename std::iterator_traits<Iterator>::value_type>>
void sort_radix_binary_lsd(Iterator iterator_begin, Iterator Iterator_end, Comparator class_comparator = Comparator()) {
    for (uint16_t curent_least_significant_bit = 0; curent_least_significant_bit < class_comparator.bit_length; ++curent_least_significant_bit) {
        class_comparator.set_significant_bit(curent_least_significant_bit);
        std::stable_partition(iterator_begin, Iterator_end, class_comparator);
    }
}

template <typename Container, typename Comparator = typename ComparatorRadixLess<typename Container::value_type>>
void sort_radix_binary_lsd(Container& container, Comparator class_comparator = Comparator()) {
    sort_radix_binary_lsd(std::begin(container), std::end(container), class_comparator);
}