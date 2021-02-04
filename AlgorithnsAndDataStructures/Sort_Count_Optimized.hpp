#pragma once
#include "Helper_Sort.hpp"
#include <iterator>
#include <algorithm>
#include <tuple>
#include <vector>

#include <type_traits>

template<typename Iterator, typename Comparator>
void sort_count(Iterator iterator_begin, Iterator iterator_end, Comparator function_comparation) {
    std::pair<Iterator, Iterator> pair_minimum_maximum = std::minmax_element(iterator_begin, iterator_end);
    typename std::iterator_traits<Iterator>::value_type range_minimum = *pair_minimum_maximum.first;
    typename std::iterator_traits<Iterator>::value_type range_maximum = *pair_minimum_maximum.second;

    if (range_minimum == range_maximum) { return; }
    
    size_t delata_range = (range_maximum - range_minimum) + 1u;;
    std::vector<size_t> vector_frequency(delata_range, 0u);
    
    for (Iterator iterator_curent = iterator_begin; iterator_curent != iterator_end; ++iterator_curent) {
        ++vector_frequency.at(*iterator_curent - range_minimum);
    }
    
    for (size_t index_curent_frequency_element = 0; index_curent_frequency_element < vector_frequency.size(); ++index_curent_frequency_element) {
        iterator_begin = std::fill_n(iterator_begin, vector_frequency.at(index_curent_frequency_element), index_curent_frequency_element + range_minimum);
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
    sort_count(container, std::greater<>{});
}