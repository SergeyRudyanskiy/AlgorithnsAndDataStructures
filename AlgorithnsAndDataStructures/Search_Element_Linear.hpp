#pragma once

template<typename Iterator, typename ElementType>
Iterator search_element_linear_iterative(Iterator iterator_begin, const Iterator iterator_end, const ElementType key_value) {
	for (iterator_begin; iterator_begin != iterator_end; ++iterator_begin) {
		if (*iterator_begin == key_value) { return iterator_begin; }
	}
	return iterator_end;
}