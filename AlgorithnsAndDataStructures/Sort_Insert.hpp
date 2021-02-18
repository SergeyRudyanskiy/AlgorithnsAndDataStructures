#pragma once
#include <type_traits>
#include <iterator>

template<typename Iterator, typename Comparator = std::less<typename std::iterator_traits<Iterator>::value_type>>
void sort_insert(Iterator iterator_begin, Iterator iterator_end, Comparator function_comparation = Comparator()) {
    if (iterator_begin == iterator_end) { return; }

    for (Iterator iterator_curent = std::next(iterator_begin); iterator_curent != iterator_end; std::advance(iterator_curent, 1)) {
        for (Iterator iterator_temporary = iterator_curent; iterator_temporary != iterator_begin && function_comparation(*iterator_temporary, *std::prev(iterator_temporary)); std::advance(iterator_temporary, -1)) {
            std::iter_swap(iterator_temporary, std::prev(iterator_temporary));
        }
    }
}

template<typename Container, typename Comparator = std::less<typename Container::value_type>>
void sort_insert(Container& container, Comparator function_comparation = Comparator()) {
    sort_insert(std::begin(container), std::end(container), function_comparation);
}