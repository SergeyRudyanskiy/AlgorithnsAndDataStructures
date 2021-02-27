#pragma once
#include <algorithm>
#include <cmath>
#include <map>

#ifndef _SEARCH_ELEMENT_WITH_MAX_DIGIT_COUNT_
#define _SEARCH_ELEMENT_WITH_MAX_DIGIT_COUNT_
template<typename Iterator, typename Comparator = std::less<typename std::iterator_traits<Iterator>::value_type>>
Iterator search_element_with_digit_count_maximum(Iterator iterator_begin, Iterator iterator_end, Comparator function_comparation = Comparator()) {
    if (std::distance(iterator_begin, iterator_end) <= 1) { return iterator_begin; }
    Iterator iterator_maximum = iterator_begin++;

    for (iterator_begin; iterator_begin != iterator_end; ++iterator_begin) {
        if (function_comparation(std::abs(*iterator_maximum), std::abs(*iterator_begin))) {
            iterator_maximum = iterator_begin;
        }
    }

    return iterator_maximum;
}
#endif // !_SEARCH_ELEMENT_WITH_MAX_DIGIT_COUNT_

template <typename Iterator, typename Comparator = std::less<typename std::iterator_traits<Iterator>::value_type>>
void sort_radix_decimal_lsd_map(Iterator iterator_begin, Iterator iterator_end, Comparator function_comparation = Comparator()) {
    if (std::distance(iterator_begin, iterator_end) <= 1) { return; }
    using ElementType = typename std::iterator_traits<Iterator>::value_type;
    using MapOrdered = std::map<int16_t, std::vector<ElementType>, std::function<bool(ElementType, ElementType)>>;

    const ElementType element_digit_maximum       = *search_element_with_digit_count_maximum(iterator_begin, iterator_end);
    const ElementType element_digit_maximum_count = (element_digit_maximum == 0 ? 1 : std::log10(std::abs(element_digit_maximum)) + 1);

    const uint8_t BASE_DECIMAL = 10u;
    const size_t divisor_maximum = std::pow(BASE_DECIMAL, element_digit_maximum_count - 1);

    for (size_t divisor_curent = 1; divisor_curent <= divisor_maximum; divisor_curent *= BASE_DECIMAL) {
        MapOrdered map_bucket(function_comparation);

        for (Iterator iterator_curent = iterator_begin; iterator_curent < iterator_end; ++iterator_curent) {
            map_bucket[(*iterator_curent / static_cast<ElementType>(divisor_curent)) % BASE_DECIMAL].push_back(*iterator_curent);
        }

        Iterator iterator_temporary = iterator_begin;
        for (const auto& bucket : map_bucket) {
            iterator_temporary = std::copy(bucket.second.begin(), bucket.second.end(), iterator_temporary);
        }
    }
}

template <typename Container, typename Comparator = std::less<typename Container::value_type>>
void sort_radix_decimal_lsd_map(Container& container, Comparator function_comparation = Comparator()) {
    sort_radix_decimal_lsd_map(std::begin(container), std::end(container), function_comparation);
}