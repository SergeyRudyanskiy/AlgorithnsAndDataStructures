#pragma once
#include <type_traits>
#include <iterator>

template <typename Iterator, typename ElementType, typename Comparator>
Iterator lower_bound(Iterator iterator_begin, Iterator iterator_end, const ElementType& value, Comparator function_comparation) {
    typename std::iterator_traits<Iterator>::difference_type element_count = std::distance(iterator_begin, iterator_end);
    typename std::iterator_traits<Iterator>::difference_type step_size;
    Iterator iterator_curent = iterator_begin;

    while (element_count > 0) {
        iterator_curent = iterator_begin;
        step_size = element_count / 2;
        std::advance(iterator_curent, step_size);
        if (function_comparation(value, *iterator_curent)) {
            iterator_begin = ++iterator_curent;
            element_count -= step_size + 1;
        }
        else {
            element_count = step_size;
        }
    }
    return iterator_begin;
}

template <typename Iterator, typename ElementType>
Iterator lower_bound(Iterator iterator_begin, Iterator iterator_end, const ElementType& value) {
    lower_bound(iterator_begin, iterator_end, value, std::less<typename std::iterator_traits<Iterator>::value_type>{});
}