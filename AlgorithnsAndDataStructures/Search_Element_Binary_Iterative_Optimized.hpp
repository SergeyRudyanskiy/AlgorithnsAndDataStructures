#pragma once
#include <iterator>

template<typename Iterator, typename ElementType>
Iterator search_element_binary_iterative_optimized(Iterator iterator_begin, Iterator iterator_end, const ElementType key_value) {
    const Iterator iterator_not_found = iterator_end;
    Iterator iterator_midle;

    ptrdiff_t distance = std::distance(iterator_begin, iterator_end);
    while (distance > 1) {
        iterator_midle = std::next(iterator_begin, distance / 2);
        (*iterator_midle <= key_value ? iterator_begin : iterator_end) = iterator_midle;
        distance = std::distance(iterator_begin, iterator_end);
    }

    return *iterator_begin == key_value ? iterator_begin : iterator_not_found;
}