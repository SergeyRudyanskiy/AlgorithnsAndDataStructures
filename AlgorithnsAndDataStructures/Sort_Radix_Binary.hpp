#pragma once
#include <algorithm>
#include <iterator>
#include <stdint.h>
#include <type_traits>

//auto lambda_comparator_less = [significant_bit](int x) { return (significant_bit == (bit_size(x) - 1u)) ? x < 0 : !(x & (1 << significant_bit)); }
const uint8_t BITS_PER_BYTE = 8u;

template<typename ElementType>
uint16_t bit_size(ElementType value ) {
    return sizeof(value) * BITS_PER_BYTE;
}

template<typename ElementType>
class ComparatorRadix {
public:
    ComparatorRadix() = default;
    ComparatorRadix(ElementType offset_bit) : significant_bit(offset_bit) {};

    void set_significant_bit(uint16_t offset_bit) { significant_bit = offset_bit; };
protected:
    int16_t significant_bit;
};

template<typename ElementType>
class ComparatorRadixLess : public ComparatorRadix<ElementType> {
public:
    ComparatorRadixLess() = default;
    ComparatorRadixLess(uint16_t offset_bit) : ComparatorRadix<ElementType>(offset_bit) {};

    bool operator()(ElementType value) const {                                                                                // sign bit
        return (this->significant_bit == (bit_size(value) - 1u)) ? value < 0 : !(value & (1 << this->significant_bit));       // negative int to left partition
    }                                                                                                                         // 0 bit to left partition
};

template<typename ElementType>
class ComparatorRadixGreater : public ComparatorRadix<ElementType> {
public:
    ComparatorRadixGreater() = default;
    ComparatorRadixGreater(uint16_t offset_bit) : ComparatorRadix<ElementType>(offset_bit) {};

    bool operator()(ElementType value) const {                                                                                // sign bit
        return (this->significant_bit == (bit_size(value) - 1u)) ? value >= 0 : (value & (1 << this->significant_bit));        // positive int to left partition
    }                                                                                                                         // 0 bit to right partition
};

// Least significant digit radix sort
template <typename Iterator, typename Comparator = typename ComparatorRadixLess<typename std::iterator_traits<Iterator>::value_type>>
void sort_radix_lsd(Iterator iterator_begin, Iterator Iterator_end, Comparator class_comparator = Comparator()) {
    const uint16_t count_bit = sizeof(typename std::iterator_traits<Iterator>::value_type) * BITS_PER_BYTE;
    for (uint16_t curent_least_significant_bit = 0; curent_least_significant_bit < count_bit; ++curent_least_significant_bit) { //least-significant-bit 
        class_comparator.set_significant_bit(curent_least_significant_bit);
        std::stable_partition(iterator_begin, Iterator_end, class_comparator);
    }
}
// Most significant digit radix sort (recursive)
//void sort_radix_msd1(int* iterator_begin, int* iterator_end, int most_significant_bit = sizeof(int) * BITS_PER_BYTE - 1u, ComparatorRadix<int> *cmp = new ComparatorRadixLess<int>(31)) {
//    if (iterator_begin != iterator_end && most_significant_bit >= 0) {
//        int* mid = std::partition(iterator_begin, iterator_end, ComparatorRadixLess<int>(most_significant_bit));
//        --most_significant_bit;                           // decrement most-significant-bit
//        sort_radix_msd1(iterator_begin, mid, most_significant_bit); // sort left partition
//        sort_radix_msd1(mid, iterator_end, most_significant_bit);  // sort right partition
//    }
//}

template <typename Iterator, typename Comparator = ComparatorRadixLess<typename std::iterator_traits<Iterator>::value_type>>
void sort_radix_msd(Iterator iterator_begin, Iterator iterator_end, Comparator class_comparator = Comparator(), uint8_t curent_most_significant_bit = sizeof(typename std::iterator_traits<Iterator>::value_type) * BITS_PER_BYTE - 1u) {
    class_comparator.set_significant_bit(curent_most_significant_bit);
    if (iterator_begin != iterator_end && curent_most_significant_bit > 0) {
        Iterator iterator_midle = std::partition(iterator_begin, iterator_end, class_comparator);
        --curent_most_significant_bit;                                                                 // decrement most-significant-bit
        sort_radix_msd(iterator_begin, iterator_midle, class_comparator, curent_most_significant_bit); // sort left partition
        sort_radix_msd(iterator_midle, iterator_end, class_comparator, curent_most_significant_bit);   // sort right partition
    }
}