#pragma once
#include "Helper_Sort.hpp"
#include <iterator>

template<typename Iterator, typename Comparator>
void inline sort_bubble(Iterator iterator_begin, Iterator iterator_end, Comparator function_comparation) {
	for (bool flag_swap_event = true; flag_swap_event && iterator_begin != iterator_end; ++iterator_begin) {
		flag_swap_event = false;
		for (Iterator iterator_current = std::next(iterator_begin); iterator_current != iterator_end; std::advance(iterator_current, 1)) {
			if (function_comparation(*iterator_current, *iterator_begin)) {
				std::iter_swap(iterator_current, iterator_begin);
				flag_swap_event = true;
			}
		}
	}
}

template <typename Iterator>
void sort_bubble(Iterator iterator_begin, Iterator iterator_end) {
	sort_bubble(iterator_begin, iterator_end, std::less<typename std::iterator_traits<Iterator>::value_type>{});
}

