#pragma once

template<typename ElementType>
inline bool is_even_version_0(ElementType& value) {
	return ((value % 2) == 0) ? true : false;
}

template<typename ElementType>
inline bool is_even_version_1(ElementType& value) {
	return ((value & 1) == 0) ? true : false;
}

template<typename ElementType>
inline bool is_odd_version_0(ElementType& value) {
	return ((value % 2) == 0) ? false : true;
}

template<typename ElementType>
inline bool is_odd_version_1(ElementType& value) {
	return ((value & 1) == 0) ? false : true;
}