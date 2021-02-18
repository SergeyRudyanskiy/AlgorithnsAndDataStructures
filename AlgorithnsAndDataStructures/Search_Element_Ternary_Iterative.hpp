#pragma once

template <typename Iterator, typename ElementType>
Iterator search_ternary_iterative(Iterator iterator_begin, Iterator iterator_end, const ElementType key_value) {
    const Iterator iterator_not_found = iterator_end;

    while (iterator_begin != iterator_end) {
        Iterator iterator_midle_left  = iterator_begin + (iterator_end - iterator_begin) / 3;
        Iterator iterator_midle_right = iterator_end   - (iterator_end - iterator_begin) / 3;

        if      (*iterator_midle_left  == key_value) { return iterator_midle_left;  }
        else if (*iterator_midle_right == key_value) { return iterator_midle_right; }

        if      (*iterator_midle_left   > key_value) { iterator_end   = iterator_midle_left  - 1; }
        else if (*iterator_midle_right  < key_value) { iterator_begin = iterator_midle_right + 1; }
        else                                         { iterator_begin = iterator_midle_left  + 1; 
                                                       iterator_end   = iterator_midle_right - 1; }
    }

    return iterator_not_found;
}