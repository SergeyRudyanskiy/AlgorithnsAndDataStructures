#pragma once

template<typename Iterator>
void print_array_element(Iterator begin, Iterator end) {
	for (begin; begin != end; ++begin) {
		std::cout << *begin << " ";
	}
	std::cout << std::endl;
}