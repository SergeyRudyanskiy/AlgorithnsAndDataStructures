#pragma once
#include <stdint.h>
#include <limits.h>

#include <algorithm>
#include <iterator>
#include <type_traits>

// Most significant digit radix sort
template <typename Iterator, typename Comparator = typename ComparatorRadixLess<typename std::iterator_traits<Iterator>::value_type>>
void sort_radix_binary_msd(Iterator iterator_begin, Iterator iterator_end, Comparator class_comparator = Comparator(), uint8_t curent_most_significant_bit = sizeof(typename std::iterator_traits<Iterator>::value_type) * CHAR_BIT - 1) {
    class_comparator.set_significant_bit(curent_most_significant_bit);
    if (iterator_begin != iterator_end && curent_most_significant_bit > 0) {
        Iterator iterator_midle = std::partition(iterator_begin, iterator_end, class_comparator);
        --curent_most_significant_bit;                                                                        // decrement most-significant-bit
        sort_radix_binary_msd(iterator_begin, iterator_midle, class_comparator, curent_most_significant_bit); // sort left partition
        sort_radix_binary_msd(iterator_midle, iterator_end, class_comparator, curent_most_significant_bit);   // sort right partition
    }
}

template <typename Container, typename Comparator = typename ComparatorRadixLess<typename Container::value_type>>
void sort_radix_binary_msd(Container& container, Comparator class_comparator = Comparator(), uint8_t curent_most_significant_bit = sizeof(typename Container::value_type) * CHAR_BIT - 1) {
    sort_radix_binary_msd(std::begin(container), std::end(container), class_comparator, curent_most_significant_bit);
}