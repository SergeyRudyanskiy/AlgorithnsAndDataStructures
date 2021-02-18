#pragma once
#include <iterator>

template<typename Iterator, typename Comparator = std::less<typename std::iterator_traits<Iterator>::value_type>>
void sort_select(Iterator iterator_begin, Iterator iterator_end, Comparator function_comparation = Comparator()) {
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

template<typename Container, typename Comparator = std::less<typename Container::value_type>>
void sort_select(Container& container, Comparator function_comparation = Comparator()) {
    sort_select(std::begin(container), std::end(container), function_comparation);
}