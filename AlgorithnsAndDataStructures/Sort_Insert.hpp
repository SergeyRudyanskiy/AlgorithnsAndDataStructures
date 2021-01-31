#pragma once
#include "Helper_Sort.hpp"
#include <type_traits>
#include <iterator>

template<typename Iterator, typename Comparator>
void sort_insert(Iterator iterator_begin, Iterator iterator_end, Comparator function_comparation) {
    if (iterator_begin == iterator_end) { return; }

    for (Iterator iterator_curent = std::next(iterator_begin); iterator_curent != iterator_end; std::advance(iterator_curent, 1)) {
        for (Iterator iterator_temporary = iterator_curent; iterator_temporary != iterator_begin && function_comparation(*iterator_temporary, *std::prev(iterator_temporary)); std::advance(iterator_temporary, -1)) {
            std::iter_swap(iterator_temporary, std::prev(iterator_temporary));
        }
    }
}

template<typename Iterator>
void sort_insert(Iterator iterator_begin, Iterator iterator_end) {
    sort_insert(iterator_begin, iterator_end, std::less<typename std::iterator_traits<Iterator>::value_type>{});
}