#pragma once
#include <iterator>
#include <stack>

#ifndef _FUNCTION_PARTITION_THREE_WAY_
#define _FUNCTION_PARTITION_THREE_WAY_
template<typename Iterator, typename Comparator>
std::pair<Iterator, Iterator> function_partition_three_way(Iterator iterator_begin, Iterator iterator_end, Comparator function_comparation) {
    Iterator iterator_pivot  = std::next(iterator_begin, (iterator_end - iterator_begin) / 2);

    for (Iterator iterator_curent = iterator_begin; iterator_curent < iterator_end;) {
        if      (function_comparation(*iterator_pivot, *iterator_curent)) { std::iter_swap(iterator_curent, --iterator_end)    ; }
        else if (function_comparation(*iterator_curent, *iterator_pivot)) { std::iter_swap(iterator_curent++, iterator_begin++); }
        else                                                              { ++iterator_curent; }
    }

    return std::move(std::make_pair(iterator_begin, iterator_end));
}
#endif _FUNCTION_PARTITION_THREE_WAY_

template <typename Iterator, typename Comparator = std::less<>>
void sort_quick_three_way_iterative(Iterator iterator_begin, Iterator iterator_end, Comparator function_comparation = Comparator()) {
    if (std::distance(iterator_begin, iterator_end) <= 1) { return; }

    std::stack<std::pair<Iterator, Iterator>> stack_partition_unsorted;
    stack_partition_unsorted.push(std::make_pair(iterator_begin, iterator_end));

    std::pair<Iterator, Iterator> pair_range_iterator;

    while (!stack_partition_unsorted.empty()) {
        iterator_begin = stack_partition_unsorted.top().first;
        iterator_end   = stack_partition_unsorted.top().second;
        stack_partition_unsorted.pop();

        pair_range_iterator = function_partition_three_way(iterator_begin, iterator_end, function_comparation);
        Iterator iterator_range_pivot_less    = pair_range_iterator.first;
        Iterator iterator_range_pivot_greater = pair_range_iterator.second;

        if (iterator_range_pivot_less    > iterator_begin) { stack_partition_unsorted.push(std::make_pair(iterator_begin,  iterator_range_pivot_less)); }
        if (iterator_range_pivot_greater < iterator_end  ) { stack_partition_unsorted.push(std::make_pair(iterator_range_pivot_greater, iterator_end)); }
    }
}

template<typename Container, typename Comparator = std::less<typename Container::value_type>>
void sort_quick_three_way_iterative(Container& container, Comparator function_comparation = Comparator()) {
    sort_quick_three_way_iterative(std::begin(container), std::end(container), function_comparation);
}