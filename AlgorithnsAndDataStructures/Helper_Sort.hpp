#pragma once

//TODO fix orders 
template<typename Iterator>
inline bool order_ascendant(const Iterator iterator_first, const Iterator iterator_second) {
	return *iterator_first > *iterator_second;
}

template<typename Iterator>
inline bool order_descendant(const Iterator iterator_first, const Iterator iterator_second) {
	return *iterator_first < *iterator_second;
}

template<typename Iterator>
inline bool comparator_less(const Iterator iterator_first, const Iterator iterator_second){
	return std::less<typename std::iterator_traits<Iterator>::value_type>(*iterator_first, *iterator_second);
}

template<typename Iterator>
inline bool comparator_greater(const Iterator iterator_first, const Iterator iterator_second) {
	return std::greater<typename std::iterator_traits<Iterator>::value_type>(*iterator_first, iterator_second);
}