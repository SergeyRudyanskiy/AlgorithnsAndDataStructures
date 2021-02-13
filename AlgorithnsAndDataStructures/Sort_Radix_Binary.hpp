#pragma once
#include <algorithm>
#include <iterator>
#include <stdint.h>
#include <type_traits>
#include <limits.h>

//auto lambda_comparator_less = [significant_bit](int x) { return (significant_bit == (bit_size(x) - 1u)) ? x < 0 : !(x & (1 << significant_bit)); }

template<typename ElementType>
class ComparatorRadix {
protected:
    int16_t bit_significant;
public:
    const int16_t bit_length;

    ComparatorRadix() : bit_length(sizeof(ElementType) * CHAR_BIT), bit_significant(0) {}
    void set_significant_bit(uint16_t offset_bit) { bit_significant = offset_bit; }
    virtual bool operator()(ElementType) const = 0;
};

template<typename ElementType>
class ComparatorRadixLess : public ComparatorRadix<ElementType> {
public:
    // check sign bit, negative int to left partition, 0 bit to left partition
    bool operator()(ElementType value) const override {                                                                                
        return (this->bit_significant == this->bit_length - 1) ? value < 0 : !(value & (1 << this->bit_significant)); 
    }                                                                                                                            
};

template<typename ElementType>
class ComparatorRadixGreater : public ComparatorRadix<ElementType> {
public:
    // check sign bit, negative int to left partition, 0 bit to left partition
    bool operator()(ElementType value) const override {                                                                                   
        return (this->bit_significant == this->bit_length -1) ? value >= 0 : (value & (1 << this->bit_significant)); 
    }                                                                                                                            
};

// Least significant digit radix sort
template <typename Iterator, typename Comparator = typename ComparatorRadixLess<typename std::iterator_traits<Iterator>::value_type>>
void sort_radix_lsd(Iterator iterator_begin, Iterator Iterator_end, Comparator class_comparator = Comparator()) {
    for (uint16_t curent_least_significant_bit = 0; curent_least_significant_bit < class_comparator.bit_length; ++curent_least_significant_bit) { //least-significant-bit 
        class_comparator.set_significant_bit(curent_least_significant_bit);
        std::stable_partition(iterator_begin, Iterator_end, class_comparator);
    }
}

template <typename Iterator, typename Comparator = ComparatorRadixLess<typename std::iterator_traits<Iterator>::value_type>>
void sort_radix_msd(Iterator iterator_begin, Iterator iterator_end, Comparator class_comparator = Comparator(), uint8_t curent_most_significant_bit = sizeof(typename std::iterator_traits<Iterator>::value_type) * CHAR_BIT - 1u) {
    class_comparator.set_significant_bit(curent_most_significant_bit);
    if (iterator_begin != iterator_end && curent_most_significant_bit > 0) {
        Iterator iterator_midle = std::partition(iterator_begin, iterator_end, class_comparator);
        --curent_most_significant_bit;                                                                 // decrement most-significant-bit
        sort_radix_msd(iterator_begin, iterator_midle, class_comparator, curent_most_significant_bit); // sort left partition
        sort_radix_msd(iterator_midle, iterator_end, class_comparator, curent_most_significant_bit);   // sort right partition
    }
}