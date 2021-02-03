#pragma once
#include <tuple>
#include <iterator>

template<typename Iterator, typename Comparator>
std::pair<Iterator, Iterator> search_element_maximum_minimum(Iterator iterator_begin, Iterator iterator_end, Comparator function_comparation) {
    Iterator iterator_minimum = iterator_begin;
    Iterator iterator_maximum = iterator_begin;

    if (iterator_begin == iterator_end || ++iterator_begin == iterator_end) { return { iterator_minimum, iterator_maximum }; }
    (function_comparation(*iterator_begin, *iterator_minimum) ? iterator_minimum : iterator_maximum) = iterator_begin;

    while (++iterator_begin != iterator_end) {
        Iterator iterator_temporary = iterator_begin;
        if (++iterator_begin == iterator_end) {
            if (function_comparation(*iterator_temporary, *iterator_minimum)) { iterator_minimum = iterator_temporary; }
            else if (!(function_comparation(*iterator_temporary, *iterator_maximum))) { iterator_maximum = iterator_temporary; }
            break;
        }
        else {
            if (function_comparation(*iterator_begin, *iterator_temporary)) {
                if (function_comparation(*iterator_begin, *iterator_minimum))      iterator_minimum = iterator_begin;
                if (!(function_comparation(*iterator_temporary, *iterator_maximum))) iterator_maximum = iterator_temporary;
            }
            else {
                if (function_comparation(*iterator_temporary, *iterator_minimum)) iterator_minimum = iterator_temporary;
                if (!(function_comparation(*iterator_begin, *iterator_maximum)))    iterator_maximum = iterator_begin;
            }
        }
    }

    return { iterator_minimum, iterator_maximum };
}


template<typename Iterator>
std::pair<Iterator, Iterator> search_element_maximum_minimum(Iterator iterator_begin, Iterator iterator_end) {
    return search_element_maximum_minimum(iterator_begin, iterator_end, std::less<>{});
}
