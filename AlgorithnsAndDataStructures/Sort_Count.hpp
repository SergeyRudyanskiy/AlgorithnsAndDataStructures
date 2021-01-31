#pragma once
#include "Helper_Sort.hpp"
#include <iterator>
#include <algorithm>
#include <tuple>

template<class Iterator, class Comparator>
std::pair<Iterator, Iterator> minmax_element(Iterator iterator_begin, Iterator iterator_end, Comparator function_comparation) {
    Iterator iterator_minimum = iterator_begin;
    Iterator iterator_maximum = iterator_begin;

    if (iterator_begin == iterator_end || ++iterator_begin == iterator_end) { return std::make_pair<Iterator, Iterator>(iterator_minimum, iterator_maximum); }
    if (function_comparation(*iterator_begin, *iterator_minimum)) { iterator_minimum = iterator_begin; }
    else {
        iterator_maximum = iterator_begin;
    }

    while (++iterator_begin != iterator_end) {
        Iteartor iterator_temporary = iterator_begin;
        if (++iterator_begin == iterator_end) {
            if (function_comparation(*iterator_temporary, *iterator_minimum)) iterator_minimum = iterator_temporary;
            else if (!(function_comparation(*iterator_temporary, *iterator_maximum))) iterator_maximum = iterator_temporary;
            break;
        }
        else {
            if (function_comparation(*iterator_begin, *iterator_temporary)) {
                if (function_comparation(*iterator_begin, *iterator_minimum)) iterator_minimum = iterator_begin;
                if (!(function_comparation(*iterator_temporary, *iterator_maximum))) iterator_maximum = iterator_temporary;
            }
            else {
                if (function_comparation(*iterator_temporary, *iterator_minimum)) iterator_minimum = iterator_temporary;
                if (!(function_comparation(*iterator_begin, *iterator_maximum))) iterator_maximum = iterator_begin;
            }
        }
    }
    return { iterator_minimum, iterator_maximum };
}


template<typename Iterator, typename Comparator>
void sort_count(Iterator iterator_begin, Iterator iterator_end, Comparator function_comparation) {
    Iterator iterator_minimum;
    Iterator iterator_maximum;
    std::tie(iterator_minimum, iterator_maximum) = std::minmax_element(iterator_begin, iterator_end, function_comparation);
}

template<typename Iterator>
void sort_count(Iterator iterator_begin, Iterator iterator_end) {
    sort_count(iterator_begin, iterator_end, std::less<typename std::iterator_traits<Iterator>::value_type>{});
}

template<typename Container, typename Comparator>
void sort_count(Container& container, Comparator function_comparation) {
    sort_count(std::begin(container), std::end(container), function_comparation);
}

template<typename Container>
void sort_count(Container& container) {
    sort_count(container, std::less<>{});
}