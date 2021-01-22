#pragma once

template<typename ElementType>
void swap(ElementType& element_first, ElementType& element_second) {
	ElementType element_temporary = element_first;
	element_first = element_second;
	element_second = element_temporary;
}