#include "Field.hpp"
template<typename T>
T Field<T>::value_get()
{
    return this->value;
}

template<typename T>
void Field<T>::value_set(T new_value)
{
    this->value = new_value;
}
