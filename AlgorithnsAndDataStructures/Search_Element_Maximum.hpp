#pragma once
#include <iterator>

template<typename Iterator, typename Comparator>
Iterator search_element_maximum(Iterator iterator_begin, Iterator iterator_end, Comparator function_comparation) {
	if (iterator_begin == iterator_end) { return iterator_end; }
	Iterator iterator_maximum = iterator_begin++;

	for (iterator_begin; iterator_begin != iterator_end; ++iterator_begin) {
		if (function_comparation(*iterator_maximum, *iterator_begin)) {
			iterator_maximum = iterator_begin;
		}
	}
	return iterator_maximum;
}


template<typename Iterator, typename Comparator>
Iterator search_element_maximum(Iterator iterator_begin, Iterator iterator_end, Comparator function_comparation) {
	return search_element_maximum(iterator_begin, iterator_end, std::less<typename std::iterator_traits<Iterator>::value_type>{});
}