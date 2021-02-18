#pragma once
template<typename Iterator, typename ElementType>
Iterator search_binary_iterative(Iterator iterator_begin, Iterator iterator_end, const ElementType key_value) {
	const Iterator iterator_not_found = iterator_end;
	Iterator iterator_midle;

	while (iterator_begin <= iterator_end) {
		iterator_midle = iterator_begin + (iterator_end - iterator_begin) / 2;

		if		(*iterator_midle > key_value) { iterator_end   = --iterator_midle; }
		else if (*iterator_midle < key_value) { iterator_begin = ++iterator_midle; }
		else								  { return iterator_midle;			   }
	}

	return iterator_not_found;
}