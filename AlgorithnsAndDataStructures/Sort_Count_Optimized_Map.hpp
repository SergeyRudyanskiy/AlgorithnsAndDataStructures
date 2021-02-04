#pragma once
#include "Helper_Sort.hpp"
#include <iterator>
#include <algorithm>
#include <type_traits>
#include <map>

template<typename Iterator, typename Comparator>
void sort_count(Iterator iterator_begin, Iterator iterator_end, Comparator function_comparation) {
    std::map<typename std::iterator_traits<Iterator>::value_type, size_t> map_frequency;

    for (Iterator iterator_curent = iterator_begin; iterator_curent != iterator_end; ++iterator_curent) {
        if (map_frequency.find(*iterator_curent) == map_frequency.end()) { //checking if elements already exist in map 
            map_frequency[*iterator_curent] = 1;                           // if no, count of the element is 1
        }
        else {
            map_frequency[*iterator_curent]++;                             // if yes, count of the element is incremented 
        }
    }

    typename std::map<typename std::iterator_traits<Iterator>::value_type, size_t>::iterator iterator_curent = map_frequency.begin();
    for (iterator_curent; iterator_curent != map_frequency.end(); ++iterator_curent) {
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