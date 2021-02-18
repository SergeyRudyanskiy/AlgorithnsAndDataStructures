#pragma once

template<typename Iterator, typename ElementType>
Iterator search_element_linear_recursive(Iterator iterator_begin, Iterator iterator_end, const ElementType key_value) {
    if ( iterator_begin == iterator_end) { return iterator_end;   }
    if (*iterator_begin == key_value)    { return iterator_begin; }

	return search_element_linear_recursive(iterator_begin + 1, iterator_end, key_value);
}