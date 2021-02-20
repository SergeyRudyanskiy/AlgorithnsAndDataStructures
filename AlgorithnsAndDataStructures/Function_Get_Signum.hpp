#pragma once
#include <stdint.h>

template<typename ElementType>
uint8_t function_get_signum(ElementType& value_first, ElementType& value_second = 0) {
	//if (value_first  > value_second) { return  1; }
	//if (value_first == value_second) { return  0; }
	//if (value_first  < value_second) { return -1; }
	return ((value_first > value_second) ? 1 : ((value_first < value_second) ? -1 : 0));
}
