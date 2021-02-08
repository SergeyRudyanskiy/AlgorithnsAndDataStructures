#pragma once
#include <iterator>
#include <algorithm>
#include <tuple>
#include <vector>

#include <type_traits>

template<typename Iterator, typename Comparator = typename std::less<typename std::iterator_traits<Iterator>::value_type>>
std::pair<Iterator, Iterator> function_min_max_element(Iterator iterator_begin, Iterator iterator_end, Comparator function_comparation = Comparator()) {
    Iterator iterator_minimum = iterator_begin;
    Iterator iterator_maximum = iterator_begin;

    if (iterator_begin == iterator_end || ++iterator_begin == iterator_end) { return { iterator_minimum, iterator_maximum }; }
    (function_comparation(*iterator_begin, *iterator_minimum) ? iterator_minimum : iterator_maximum) = iterator_begin;

    while (++iterator_begin != iterator_end) {
        Iterator iterator_temporary = iterator_begin;
        if (++iterator_begin == iterator_end) {
            if        (function_comparation(*iterator_temporary, *iterator_minimum))  { iterator_minimum = iterator_temporary; }
            else if (!(function_comparation(*iterator_temporary, *iterator_maximum))) { iterator_maximum = iterator_temporary; }
            break;
        }
        else {
            if (function_comparation(*iterator_begin, *iterator_temporary)) {
                if (  function_comparation(*iterator_begin, *iterator_minimum))      iterator_minimum = iterator_begin;
                if (!(function_comparation(*iterator_temporary, *iterator_maximum))) iterator_maximum = iterator_temporary;
            }
            else {
                if (  function_comparation(*iterator_temporary, *iterator_minimum)) iterator_minimum = iterator_temporary;
                if (!(function_comparation(*iterator_begin, *iterator_maximum)))    iterator_maximum = iterator_begin;
            }
        }
    }

    return { iterator_minimum, iterator_maximum };
}

template<typename Iterator, typename Comparator = typename std::less<typename std::iterator_traits<Iterator>::value_type>>
void sort_count(Iterator iterator_begin, Iterator iterator_end, Comparator function_comparation = Comparator()) {
    Iterator iterator_minimum;
    Iterator iterator_maximum;
    std::tie(iterator_minimum, iterator_maximum) = function_min_max_element(iterator_begin, iterator_end);

    if (*iterator_minimum == *iterator_maximum) { return; }

    size_t delta_range = (*iterator_maximum - *iterator_minimum) + 1u;;
    std::vector<size_t> vector_frequency(delta_range, 0u);
    
    for (Iterator iterator_curent = iterator_begin; iterator_curent != iterator_end; ++iterator_curent) {
        ++vector_frequency.at(*iterator_curent - *iterator_minimum);
    }
    // TODO: add dependencies of comparator
    for (size_t index_curent_frequency_element = 0; index_curent_frequency_element < vector_frequency.size(); ++index_curent_frequency_element) {
        while (vector_frequency.at(index_curent_frequency_element)--) {
            *iterator_begin++ = static_cast<typename std::iterator_traits<Iterator>::value_type>(index_curent_frequency_element) + *iterator_minimum;
        }
        //std::fill(iterator_begin, iterator_begin + vector_frequency.at(index_curent_frequency_element), index_curent_frequency_element + *iterator_minimum);
        //std::advance(iterator_begin, vector_frequency.at(index_curent_frequency_element));
    }
}

template<typename Container, typename Comparator = typename std::less<typename std::iterator_traits<Container>::value_type>>
void sort_count(Container& container, Comparator function_comparation = Comparator()) {
    sort_count(std::begin(container), std::end(container), function_comparation);
}