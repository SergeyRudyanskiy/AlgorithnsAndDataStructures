#pragma once

template<typename Iterator, typename ElementType>
Iterator search_element_binary_recursive(Iterator iterator_begin, Iterator iterator_end, const ElementType key_value) {
	static const Iterator iterator_not_found = iterator_end;
	Iterator iterator_midle;

	if (iterator_begin < iterator_end) {
		iterator_midle = iterator_begin + (iterator_end - iterator_begin) / 2;

		if		(*iterator_midle > key_value) { return search_element_binary_recursive(iterator_begin, iterator_midle, key_value); }
		else if (*iterator_midle < key_value) { return search_element_binary_recursive(++iterator_midle, iterator_end, key_value); }
		else								  { return iterator_midle;															   }
	}

	return iterator_not_found;
}