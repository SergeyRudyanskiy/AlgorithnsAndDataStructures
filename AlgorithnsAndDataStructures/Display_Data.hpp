#pragma once
#include <iterator>

template<typename Iterator>
void print_data(Iterator iterator_begin, Iterator iterator_end, const char* const separator = " ") {
    using value_type = typename std::iterator_traits<Iterator>::value_type;
    std::copy(iterator_begin, iterator_end, std::ostream_iterator<value_type>(std::cout, separator));
    std::cout << std::endl;
}

template<typename Container>
void print_data(const Container& container, const char* const separator = " ") {
    print_data(std::begin(container), std::end(container));
}