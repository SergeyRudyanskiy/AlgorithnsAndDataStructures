#pragma once
#include "Helper_Sort.hpp"
#include <functional>

template <typename Iterator>
void sort_insert(Iterator iterator_begin, Iterator iterator_end, bool (*function_comparation)(const Iterator, const Iterator)) {
    if (iterator_begin == iterator_end) { return; }

    for (Iterator iterator_curent = iterator_begin + 1; iterator_curent != iterator_end; ++iterator_curent) {
        for (Iterator temporary = iterator_curent; temporary != iterator_begin && function_comparation(temporary - 1, temporary); --temporary) {
            std::iter_swap(temporary - 1, temporary);
        }
    }
}

template <typename Iterator>
void sort_insert(Iterator iterator_begin, Iterator iterator_end) {
    sort_insert(iterator_begin, iterator_end, order_ascendant);
}

/// Insertion Sort with default less-than operator
//template <typename iterator>
//void sort_insert(iterator first, iterator last) {
//    sort_insert(first, last, std::less<typename std::iterator_traits<iterator>::value_type>());
//}