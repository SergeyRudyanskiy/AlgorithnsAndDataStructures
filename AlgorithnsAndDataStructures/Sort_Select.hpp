#pragma once
#include "Helper_Sort.hpp"
#include <iterator>

template<typename Iterator, typename Comparator>
void sort_select(Iterator iterator_begin, Iterator iterator_end, Comparator function_comparation) {
    while (iterator_begin != iterator_end) {
        Iterator iterator_temporary = iterator_begin; // store min or max depends on function_comparation
        for (Iterator iterator_current = std::next(iterator_begin); iterator_current != iterator_end; std::advance(iterator_current, 1)) {
            if (function_comparation(*iterator_current, *iterator_temporary)) {
                iterator_temporary = iterator_current; 
            }
        }
        std::iter_swap(iterator_begin, iterator_temporary);
        ++iterator_begin;
    }
}

template <typename Iterator>
void sort_select(Iterator iterator_begin, Iterator iterator_end) {
    sort_select(iterator_begin, iterator_end, std::less<typename std::iterator_traits<Iterator>::value_type>{});
}

