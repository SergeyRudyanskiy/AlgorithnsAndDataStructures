template<typename ElementType>
void swap(ElementType* value_first, ElementType* value_second) {
    ElementType value_temporary = *value_first;
    *value_first = *value_second;
    *value_second = value_temporary;
}