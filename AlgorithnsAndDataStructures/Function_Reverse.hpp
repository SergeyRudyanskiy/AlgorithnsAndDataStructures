#pragma once
#include <iterator>

template<typename Iterator>
void reverse(Iterator iterator_begin, Iterator iterator_end) {
    while ((iterator_begin != iterator_end) && (iterator_begin != --iterator_end)) {
        std::iter_swap(iterator_begin++, iterator_end);
    }
}