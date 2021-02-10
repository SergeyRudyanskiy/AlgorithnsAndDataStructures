#pragma once
#include <algorithm>
#include <iostream>
#include <iterator>
#include <stdint.h>

// Radix sort comparator for 32-bit two's complement integers
class RadixComparator {
    const uint8_t bit; // bit position [0..31] to examine
public:
    RadixComparator(uint8_t offset) : bit(offset) {} // constructor

    bool operator()(int value) const {// function call operator
        //if (bit == 31) // sign bit
        //    return value < 0; // negative int to left partition
        //else
        //    return !(value & (1 << bit)); // 0 bit to left partition

        return bit == 31 ? value < 0 : !(value & (1 << bit));
    }
};

// Least significant digit radix sort
void sort_radix_lsd(int* first, int* last) {
    for (int least_significant_bit = 0; least_significant_bit < 32; ++least_significant_bit) { // least-significant-bit 
        std::stable_partition(first, last, RadixComparator(least_significant_bit));
    }
}

// Most significant digit radix sort (recursive)
void sort_radix_msd(int* first, int* last, int most_significant_bit = 31) {
    if (first != last && most_significant_bit >= 0) {
        int* mid = std::partition(first, last, RadixComparator(most_significant_bit));
        --most_significant_bit;                           // decrement most-significant-bit
        sort_radix_msd(first, mid, most_significant_bit); // sort left partition
        sort_radix_msd(mid, last, most_significant_bit);  // sort right partition
    }
}