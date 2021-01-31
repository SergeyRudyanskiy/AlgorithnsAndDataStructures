#pragma once

// duplicate all data and we have two copies of each variable
template<typename ElementType>
void swap_temp(ElementType& element_first, ElementType& element_second) {
	ElementType element_temporary = element_first;  // now we have two copies of a
	element_first  = element_second;				// now we have two copies of b
	element_second = element_temporary;				// now we have two copies of tmp (aka a)
}

// dont make any copies of variables
template <typename ElementType>
void swap_move(ElementType& element_first, ElementType& element_second) {
	ElementType element_temporary(std::move(element_first));
	element_first  = std::move(element_second);
	element_second = std::move(element_temporary);
}

// integer overflow
template<typename ElementType>
void swap_addition(ElementType& element_first, ElementType& element_second) {
	element_first -= element_second;
	element_second += element_first;				// b gets the original value of a
	element_first = element_second - element_first;	// a gets the original value of b
}

// integer overflow
// not support "0" value, this won't work if one of the numbers is 0
template<typename ElementType>
void swap_multiplication(ElementType& element_first, ElementType& element_second) {
	element_first  = element_first * element_second;
	element_second = element_first / element_second;	// b gets the original value of a
	element_first  = element_first / element_second;	// a gets the original value of b
}

// The code first checks if the addresses are distinct. 
// Otherwise, if they were equal, the algorithm would fold to a triple *x ^= *x resulting in zero.
// Doesn't work when a and b are the same object - assigns zero (0) to the object in that case 
template <typename ElementType>
void swap_xor(ElementType* element_first, ElementType* element_second) {
	if (element_first != element_second) {
		*element_first  ^= *element_second;
		*element_second ^= *element_first;
		*element_first  ^= *element_second;
	}
}