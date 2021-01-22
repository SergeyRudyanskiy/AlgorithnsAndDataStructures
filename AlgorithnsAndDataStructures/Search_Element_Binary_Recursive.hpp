#pragma once

template<typename Iterator, typename ElementType>
Iterator search_binary_recursive(Iterator iterator_begin, Iterator iterator_end, const ElementType value_key) {
	static const Iterator iterator_not_found = iterator_end;
	Iterator iterator_midle;

	if (iterator_begin <= iterator_end) {
		iterator_midle = iterator_begin + (iterator_end - iterator_begin) / 2;

		if		(*iterator_midle > value_key) { return search_binary_recursive(iterator_begin, --iterator_midle, value_key); }
		else if (*iterator_midle < value_key) { return search_binary_recursive(++iterator_midle, iterator_end, value_key);	 }
		else								  { return iterator_midle;														 }
	}

	return iterator_not_found;
}