#pragma once
#include "Helper_Sort.hpp"
#include <iterator>
#include <algorithm>
#include <type_traits>
#include <map>

template<typename Iterator, typename Comparator>
void sort_count(Iterator iterator_begin, Iterator iterator_end, Comparator function_comparation) {
    using ElementType = typename std::iterator_traits<Iterator>::value_type;
    std::map<ElementType, size_t> map_frequency;

    for (Iterator iterator_curent = iterator_begin; iterator_curent != iterator_end; ++iterator_curent) {
        map_frequency[*iterator_curent]++;
    }

    
    for (typename std::map<ElementType, size_t>::iterator iterator_curent = map_frequency.begin(); iterator_curent != map_frequency.end(); ++iterator_curent) {
        iterator_begin = std::fill_n(iterator_begin, iterator_curent->second, iterator_curent->first);
    }
}

template<typename Iterator>
void sort_count(Iterator iterator_begin, Iterator iterator_end) {
    sort_count(iterator_begin, iterator_end, std::greater<typename std::iterator_traits<Iterator>::value_type>{});
}

template<typename Container, typename Comparator>
void sort_count(Container& container, Comparator function_comparation) {
    sort_count(std::begin(container), std::end(container), function_comparation);
}

template<typename Container>
void sort_count(Container& container) {
    sort_count(container, std::less<>{});
}