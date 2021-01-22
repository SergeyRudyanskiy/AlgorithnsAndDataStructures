#pragma once
#include <vector>
#include <stdint.h>
#include <iterator>
#include <iostream>

template<typename ElementType>
class ImplementationStack {
public:

	ImplementationStack(const uint16_t capasity);
	~ImplementationStack();

	bool is_empty() const;
	bool is_full() const;

	ElementType peak() const;

	void push(ElementType element);
	void pop();
	void display();


private:
	std::vector<ElementType> vector_stack;
};

template<typename ElementType>
ImplementationStack<ElementType>::ImplementationStack(const uint16_t capasity) {
	vector_stack.reserve(capasity);
}

template<typename ElementType>
ImplementationStack<ElementType>::~ImplementationStack() {
}

template<typename ElementType>
inline bool ImplementationStack<ElementType>::is_empty() const {
	return vector_stack.size() == 0;
}

template<typename ElementType>
inline bool ImplementationStack<ElementType>::is_full() const {
	return vector_stack.size() == vector_stack.capacity();
}

template<typename ElementType>
inline void ImplementationStack<ElementType>::push(ElementType element) {
	vector_stack.push_back(element);
}

template<typename ElementType>
inline void ImplementationStack<ElementType>::pop() {
	vector_stack.pop_back();
}

template<typename ElementType>
inline void ImplementationStack<ElementType>::display() {
	for (unsigned int i = 0; i < vector_stack.size(); ++i) {
		std::cout << vector_stack[i] << std::endl;
	}
}

template<typename ElementType>
inline ElementType ImplementationStack<ElementType>::peak() const {
	return vector_stack.back();
}