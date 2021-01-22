template<typename ElementType>
void swap(ElementType& element_first, ElementType& element_second) {
	ElementType element_temporary = element_first;
	element_first = element_second;
	element_second = element_temporary;
}


template<typename ElementType>
ElementType* search_linear(ElementType* pointer_begin, ElementType* pointer_end, const ElementType key) {
	for (pointer_begin; pointer_begin != pointer_end; ++pointer_begin) {
		if (*pointer_begin == key) { 
			return pointer_begin; 
		}
	}
	return pointer_end;
}

template<typename ElementType>
ElementType* search_binary_iterative(ElementType* pointer_begin, ElementType* pointer_end, const ElementType key) {

	return pointer_end;
}

template<typename ElementType>
ElementType* search_binary_recursive(ElementType* pointer_begin, ElementType* pointer_end, const ElementType key) {

	return pointer_end;
}


template<typename ElementType>
ElementType* search_element_maximum(ElementType* pointer_begin, ElementType* pointer_end) {
	ElementType* pointer_element_maximum = pointer_begin;

	for (pointer_begin + 1; pointer_begin != pointer_end; ++pointer_begin) {
		if (*pointer_begin > *pointer_element_maximum) {
			pointer_element_maximum = pointer_begin;
		}
	}
	return pointer_element_maximum;
}

template<typename ElementType>
ElementType* search_element_minimum(ElementType* pointer_begin, ElementType* pointer_end) {
	ElementType* pointer_element_minimum = pointer_begin;

	for (pointer_begin + 1; pointer_begin != pointer_end; ++pointer_begin) {
		if (*pointer_begin < *pointer_element_maximum) {
			pointer_element_minimum = pointer_begin;
		}
	}
	return pointer_element_maximum;
}


template<class Iterartor, class Predicate>
void bubble_sort(Iterartor first, Iterartor last, Predicate function_comparation) {
	for (bool flag_swap_event = true; flag_swap_event && first != last; ++first) {
		flag_swap_event = false;
		for (Iterartor second(first); ++second != last;) {
			if (function_comparation(*first, *second)) {
				std::swap(*first, *second);
				flag_swap_event = true;
			}
		}
	}
}
