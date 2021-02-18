#pragma once
#include <stdint.h>
#include <cmath>
#include <string>

template<typename ElementType>
uint8_t calculate_digit_count_version_0(ElementType value) {
    uint8_t digit_count = 0;
    while (value / 10) { ++digit_count; }

    return digit_count == 0u ? 1u : digit_count;
}

template<typename ElementType>
uint8_t calculate_digit_count_version_1(ElementType value) {
    return (value == 0 ? 1u : 1u + calculate_digit_count_version_1(value / 10));
}

template<typename ElementType>
uint8_t calculate_digit_count_version_2(ElementType value) {
    return std::floor(std::log10(value) + 1u);
}

template<typename ElementType>
uint8_t calculate_digit_count_version_3(ElementType value) {
    std::string string_representation_of_value = std::to_string(value);
    return static_cast<uint8_t>(string_representation_of_value.size());
}

template<typename ElementType>
uint8_t calculate_digit_count_version_4(ElementType value) {
}