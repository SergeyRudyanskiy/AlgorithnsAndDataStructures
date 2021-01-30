#pragma once
#include<iterator>

template <typename Iterator>
void function_rotate(Iterator iterator_begin, Iterator iterator_pivot, Iterator iterator_end) {
    Iterator iterator_curent = iterator_pivot;

    while (iterator_begin != iterator_curent) {
        std::iter_swap(iterator_begin++, iterator_curent++);

        if      (iterator_curent == iterator_end)  { iterator_curent = iterator_pivot; }
        else if (iterator_begin == iterator_pivot) { iterator_pivot = iterator_curent; }
    }
}