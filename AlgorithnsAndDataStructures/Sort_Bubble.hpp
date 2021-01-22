#pragma once
#include "Helper_Sort.hpp"

template<typename Iterator>
void inline sort_bubble(Iterator iterator_begin, Iterator iterator_end, bool (*function_comparation)(const Iterator, const Iterator)) {
	for (bool flag_swap_event = true; flag_swap_event && iterator_begin != iterator_end; ++iterator_begin) {
		flag_swap_event = false;
		for (Iterator iterator_current = iterator_begin + 1u; iterator_current != iterator_end; ++iterator_current) {
			if (function_comparation(iterator_begin, iterator_current)) {
				std::iter_swap(iterator_begin, iterator_current);
				flag_swap_event = true;
			}
		}
	}
}

template <typename Iterator>
void sort_bubble(Iterator iterator_begin, Iterator iterator_end) {
	sort_bubble(iterator_begin, iterator_end, order_ascendant);
}

//template<typename Iterartor, typename Predicate>
//void inline sort_bubble(Iterartor iterator_begin, Iterartor iterator_end, Predicate& function_comparation) {
//	for (bool flag_swap_event = true; flag_swap_event && iterator_begin != iterator_end; ++iterator_begin) {
//		flag_swap_event = false;
//		for (Iterartor iterator_current = iterator_begin + 1; iterator_current != iterator_end; ++iterator_current) {
//			if (function_comparation(*iterator_begin, *iterator_current)) {
//				std::iter_swap(iterator_begin, iterator_current);
//				flag_swap_event = true;
//			}
//		}
//	}
//}

//template<typename Iterartor>
//void inline sort_bubble(Iterartor iterator_begin, Iterartor iterator_end, bool (*function_comparation)(Iterartor a, Iterartor b)) {
//	for (bool flag_swap_event = true; flag_swap_event && iterator_begin != iterator_end; ++iterator_begin) {
//		flag_swap_event = false;
//		for (Iterartor iterator_current{ iterator_begin }; ++iterator_current != iterator_end;) {
//			if (function_comparation(iterator_begin, iterator_current)) {
//				std::iter_swap(iterator_begin, iterator_current);
//				flag_swap_event = true;
//			}
//		}
//	}
//}

