#pragma once
#include "Helper_Sort.hpp"

template<typename Iterator, typename Comparator>
void function_partition(Iterator iterator_begin, Iterator iterator_midle, Iterator iterator_end, Comparator function_comparation) {
    
}

template<typename Iterator, typename Comparator>
void sort_quick_recursive(const Iterator iterator_begin, const Iterator iterator_end, Comparator function_comparation) {
    if (iterator_begin == iterator_end || iterator_begin + 1u == iterator_end) { return; }

}

template<typename Iterator>
void sort_merge_recursive(Iterator iterator_begin, Iterator iterator_end) {
    sort_merge_iterative(iterator_begin, iterator_end, comparator_less);
}