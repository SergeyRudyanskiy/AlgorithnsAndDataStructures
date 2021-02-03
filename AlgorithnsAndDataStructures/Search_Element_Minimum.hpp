#pragma once
#include <iterator>

template<typename Iterator, typename Comparator>
Iterator search_element_minimum(Iterator iterator_begin, Iterator iterator_end, Comparator function_comparation) {
    if (iterator_begin == iterator_end) { return iterator_end; }
	Iterator iterator_minimum = iterator_begin++;

	for (iterator_begin; iterator_begin != iterator_end; ++iterator_begin) {
		if (function_comparation(*iterator_minimum, *iterator_begin)) {
			iterator_minimum = iterator_begin;
		}
	}
	return iterator_minimum;
}


template<typename Iterator, typename Comparator>
Iterator search_element_minimum(Iterator iterator_begin, Iterator iterator_end, Comparator function_comparation) {
    return search_element_minimum(iterator_begin, iterator_end, std::greater<typename std::iterator_traits<Iterator>::value_type>{});
}