#pragma once

template<typename Iterator>
Iterator search_element_minimum(Iterator iterator_begin, Iterator iterator_end) {
	Iterator iterator_element_minimum = iterator_begin;

	for (iterator_begin; iterator_begin != iterator_end; ++iterator_begin) {
		if (*iterator_element_minimum > *iterator_begin) {
			iterator_element_minimum = iterator_begin;
		}
	}
	return iterator_element_minimum;
}
