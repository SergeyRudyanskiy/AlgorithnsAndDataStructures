#pragma once
#include <climits>
#include <stdint.h>
//auto lambda_comparator_less = [significant_bit](int x) { return (significant_bit == (bit_size(x) - 1u)) ? x < 0 : !(x & (1 << significant_bit)); }

template<typename ElementType>
class ComparatorRadix {
protected:
    int16_t bit_significant;
public:
    const int16_t bit_length;

    ComparatorRadix() : bit_length(sizeof(ElementType)* CHAR_BIT), bit_significant(0) {}
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
    // check sign bit, negative int to right, 0 bit to right partition
    bool operator()(ElementType value) const override {
        return (this->bit_significant == this->bit_length - 1) ? value >= 0 : (value & (1 << this->bit_significant));
    }
};