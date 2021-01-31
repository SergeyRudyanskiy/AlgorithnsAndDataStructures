#pragma once
#include "Helper_Sort.hpp"
#include <iterator>

template<typename Iterator, typename Comparator>
Iterator function_partition(Iterator iterator_begin, Iterator iterator_end, Comparator function_comparation) {
    Iterator iterator_pivot = std::prev(iterator_end, 1);

    for (Iterator iterator_curent = iterator_begin; iterator_curent < iterator_pivot; ++iterator_curent) {
        if (function_comparation(*iterator_curent, *iterator_pivot)) {
            std::iter_swap(iterator_begin++, iterator_curent);
        }
    }
    std::iter_swap(iterator_begin, iterator_pivot);

    return std::move(iterator_begin);
}

template<typename Iterator, typename Comparator>
void sort_quick_recursive(Iterator iterator_begin, Iterator iterator_end, Comparator function_comparation) {
    if (std::distance(iterator_begin, iterator_end) > 1) { 
        Iterator iterator_pivot = std::move(function_partition(iterator_begin, iterator_end, function_comparation));
        sort_quick_recursive(iterator_begin, iterator_pivot, function_comparation);
        sort_quick_recursive(iterator_pivot + 1, iterator_end, function_comparation);
    }
}

template<typename Iterator>
void sort_quick_recursive(Iterator iterator_begin, Iterator iterator_end) {
    sort_quick_recursive(iterator_begin, iterator_end, std::less<typename std::iterator_traits<Iterator>::value_type>{});
}