#pragma once
#include "Helper_Sort.hpp"

template<typename Iterator>
void sort_select(Iterator iterator_begin, Iterator iterator_end, bool (*function_comparation)(const Iterator, const Iterator)) {
    while (iterator_begin != iterator_end) {
        Iterator iterator_temporary = iterator_begin; // store min or max depends on function_comparation
        for (Iterator iterator_current = iterator_begin + 1u; iterator_current != iterator_end; ++iterator_current) {
            if (function_comparation(iterator_temporary, iterator_current)) { 
                iterator_temporary = iterator_current; 
            }
        }
        std::iter_swap(iterator_begin, iterator_temporary);
        ++iterator_begin;
    }
}

template <typename Iterator>
void sort_select(Iterator iterator_begin, Iterator iterator_end) {
    sort_select(iterator_begin, iterator_end, order_ascendant);
}

