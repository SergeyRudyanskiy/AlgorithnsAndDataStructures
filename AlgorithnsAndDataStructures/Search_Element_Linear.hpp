#pragma once

template<typename Iterator, typename ElementType>
Iterator search_element_linear(Iterator iterator_begin, Iterator iterator_end, const ElementType key) {
	for (iterator_begin; iterator_begin != iterator_end; ++iterator_begin) {
		if (*iterator_begin == key) { return iterator_begin; }
	}
	return iterator_end;
}