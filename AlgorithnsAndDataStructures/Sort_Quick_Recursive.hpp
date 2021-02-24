#pragma once
#include <iterator>

#ifndef _FUNCTION_PARTITION_
#define _FUNCTION_PARTITION_
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
#endif _FUNCTION_PARTITION_

template<typename Iterator, typename Comparator = std::less<typename std::iterator_traits<Iterator>::value_type>>
void sort_quick_recursive(Iterator iterator_begin, Iterator iterator_end, Comparator function_comparation = Comparator()) {
    if (std::distance(iterator_begin, iterator_end) > 1) { 
        Iterator iterator_pivot = std::move(function_partition(iterator_begin, iterator_end, function_comparation));
        sort_quick_recursive(iterator_begin, iterator_pivot, function_comparation);
        sort_quick_recursive(iterator_pivot + 1, iterator_end, function_comparation);
    }
}

template<typename Container, typename Comparator = std::less<typename Container::value_type>>
void sort_quick_recursive(Container& container, Comparator function_comparation = Comparator()) {
    sort_quick_recursive(std::begin(container), std::end(container), function_comparation);
}