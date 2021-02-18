#pragma once

template <typename Iterator, typename ElementType>
Iterator search_ternary_recursive(Iterator iterator_begin, Iterator iterator_end, const ElementType key_value) {
    static const Iterator iterator_not_found = iterator_end;

    Iterator iterator_midle_left = iterator_begin + (iterator_end - iterator_begin) / 3;
    Iterator iterator_midle_right = iterator_end - (iterator_end - iterator_begin) / 3;

    if (iterator_begin != iterator_end) {
        if      (*iterator_midle_left  == key_value) { return iterator_midle_left;  }
        else if (*iterator_midle_right == key_value) { return iterator_midle_right; }

        if      (*iterator_midle_left > key_value)  { return search_ternary_recursive(iterator_begin, iterator_midle_left - 1, key_value); }
        else if (*iterator_midle_right < key_value) { return search_ternary_recursive(iterator_midle_right + 1, iterator_end,  key_value); }
        else                                        { return search_ternary_recursive(iterator_midle_left + 1, iterator_midle_right - 1, key_value); }
    }

    return iterator_not_found;
}