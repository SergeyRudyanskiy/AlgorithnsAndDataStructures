#pragma once
#include "Helper_Sort.hpp"
#include <iterator>

template<typename Iterator, typename Comparator>
void sort_count(Iterator iterator_begin, Iterator iterator_end, Comparator function_comparation) {

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