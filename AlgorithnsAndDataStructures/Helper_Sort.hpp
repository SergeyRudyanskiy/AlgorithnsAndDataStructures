#pragma once

template<typename Iterator>
bool order_ascendant(const Iterator iterator_first, const Iterator iterator_second) {
	return *iterator_first > *iterator_second;
}

template<typename Iterator>
bool order_descendant(const Iterator iterator_first, const Iterator iterator_second) {
	return *iterator_first < *iterator_second;
}