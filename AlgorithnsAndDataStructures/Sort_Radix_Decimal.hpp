#pragma once
#include <algorithm>
#include <vector>
#include <array>
#include <cmath>

template <typename Iterator>
void sort_radix_decimal_iterative(Iterator iterator_begin, Iterator iterator_end) {
    const unsigned int max_divisor = std::pow(10u, std::log10(*std::max_element(iterator_begin, iterator_end)));
    for (unsigned int divisor = 1; divisor < max_divisor; divisor *= 10) {
        std::array<std::vector<int>, 10> buckets;
        std::for_each(iterator_begin, iterator_end, [&buckets, divisor](auto value) {
            buckets[(value / divisor) % 10].push_back(value);
            });
        auto out = iterator_begin;
        for (const auto& bucket : buckets) {
            out = std::copy(bucket.begin(), bucket.end(), out);
        }
    }
}