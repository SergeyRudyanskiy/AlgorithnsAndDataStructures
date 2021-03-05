#pragma once
#include <iterator>

#ifndef _FUNCTION_PARTITION_THREE_WAY_
#define _FUNCTION_PARTITION_THREE_WAY_
template<typename Iterator, typename Comparator>
std::pair<Iterator, Iterator> function_partition_three_way(Iterator iterator_begin, Iterator iterator_end, Comparator function_comparation) {
    Iterator iterator_pivot  = std::prev(iterator_end);
    
    for (Iterator iterator_curent = iterator_begin; iterator_curent < iterator_end;) {
        if      (function_comparation(*iterator_pivot, *iterator_curent)) { std::iter_swap(iterator_curent, --iterator_end)    ; }
        else if (function_comparation(*iterator_curent, *iterator_pivot)) { std::iter_swap(iterator_curent++, iterator_begin++); }
        else                                                              { ++iterator_curent; }
    }

    return std::move(std::make_pair(iterator_begin, iterator_end));
}
#endif _FUNCTION_PARTITION_THREE_WAY_


template <typename Iterator, typename Comparator = std::less<>>
void sort_quick_three_way_recursive_optimized(Iterator iterator_begin, Iterator iterator_end, Comparator function_comparation = Comparator()) {
    if (std::distance(iterator_begin, iterator_end) <= 1) { return; }

    std::pair<Iterator, Iterator> pair_range_iterator = function_partition_three_way(iterator_begin, iterator_end, function_comparation);
    Iterator iterator_range_pivot_less    = pair_range_iterator.first;
    Iterator iterator_range_pivot_greater = pair_range_iterator.second;

    sort_quick_three_way_recursive_optimized(iterator_begin, iterator_range_pivot_less,  function_comparation);
    sort_quick_three_way_recursive_optimized(iterator_range_pivot_greater, iterator_end, function_comparation);
}

template<typename Container, typename Comparator = std::less<typename Container::value_type>>
void sort_quick_three_way_recursive_optimized(Container& container, Comparator function_comparation = Comparator()) {
    sort_quick_three_way_recursive_optimized(std::begin(container), std::end(container), function_comparation);
}