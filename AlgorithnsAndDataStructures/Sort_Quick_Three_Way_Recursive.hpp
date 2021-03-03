#pragma once
#include <iterator>

template <typename Iterator, typename Comparator = std::less<>>
void sort_quick_three_way_recursive(Iterator iterator_begin, Iterator iterator_end, Comparator function_comparation = Comparator()) {
    if (std::distance(iterator_begin, iterator_end) <= 1) { return; }

    Iterator iterator_pivot   = std::next(iterator_begin, (iterator_end - iterator_begin) / 2);
    Iterator iterator_less    = iterator_begin;
    Iterator iterator_greater = iterator_end;
    Iterator iterator_curent  = iterator_begin;

    while (iterator_curent < iterator_greater) {
        if      (*iterator_curent > *iterator_pivot) { std::iter_swap(iterator_curent, --iterator_greater); }
        else if (*iterator_curent < *iterator_pivot) { std::iter_swap(iterator_curent++, iterator_less++ ); }
        else                                         { ++iterator_curent; }
    }

    sort_quick_three_way_recursive(iterator_begin,  iterator_less, function_comparation);
    sort_quick_three_way_recursive(iterator_greater, iterator_end, function_comparation);
}

template<typename Container, typename Comparator = std::less<typename Container::value_type>>
void sort_quick_three_way_recursive(Container& container, Comparator function_comparation = Comparator()) {
    sort_quick_three_way_recursive(std::begin(container), std::end(container), function_comparation);
}