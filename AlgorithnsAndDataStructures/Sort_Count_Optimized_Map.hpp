#pragma once
#include <iterator>
#include <type_traits>
#include <map>
#include <functional>

template<typename Iterator, typename Comparator = typename std::less<typename std::iterator_traits<Iterator>::value_type>>
void sort_count_optimized_map(Iterator iterator_begin, Iterator iterator_end, Comparator function_comparation = Comparator()) {
    using ElementType = typename std::iterator_traits<Iterator>::value_type;
    using MapOrdered  = std::map<ElementType, size_t, std::function<bool(ElementType, ElementType)>>; 
    MapOrdered map_frequency(function_comparation);

    for (Iterator iterator_curent = iterator_begin; iterator_curent != iterator_end; ++iterator_curent) {
        map_frequency[*iterator_curent]++; // map_frequency.at(*iterator_curent)++
    }
    
    for (typename std::map<ElementType, size_t, Comparator>::iterator iterator_curent = map_frequency.begin(); iterator_curent != map_frequency.end(); ++iterator_curent) {
        iterator_begin = std::fill_n(iterator_begin, iterator_curent->second, iterator_curent->first);
    }
}

template<typename Container, typename Comparator = typename std::less<typename Container::value_type>>
void sort_count_optimized_map(Container& container, Comparator function_comparation = Comparator()) {
    sort_count_optimized_map(std::begin(container), std::end(container), function_comparation);
}
