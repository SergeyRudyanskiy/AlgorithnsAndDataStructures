#pragma once
#include <iterator>
#include <stack>

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
void sort_quick_iterative(Iterator iterator_begin, Iterator iterator_end, Comparator function_comparation = Comparator()) {
    if (std::distance(iterator_begin, iterator_end) <= 1) { return; }

    std::stack<std::pair<Iterator, Iterator>> stack_partition_unsorted;
    stack_partition_unsorted.push(std::make_pair(iterator_begin, iterator_end));
    Iterator iterator_pivot;

    while (!stack_partition_unsorted.empty()) {
        iterator_begin = stack_partition_unsorted.top().first;
        iterator_end   = stack_partition_unsorted.top().second;
        stack_partition_unsorted.pop();

        iterator_pivot = function_partition(iterator_begin, iterator_end, function_comparation);

        if (iterator_pivot > iterator_begin  ) { stack_partition_unsorted.push(std::make_pair(iterator_begin, iterator_pivot    )); }
        if (iterator_pivot < iterator_end - 1) { stack_partition_unsorted.push(std::make_pair(iterator_pivot + 1, iterator_end  )); }
    }
}

template<typename Container, typename Comparator = std::less<typename Container::value_type>>
void sort_quick_iterative(Container& container, Comparator function_comparation = Comparator()) {
    sort_quick_iterative(std::begin(container), std::end(container), function_comparation);
}