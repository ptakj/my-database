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

template<typename T>
Field<T>::Field(T value_)
{
    this->value = value_;
}


template class Field<int>;
template class Field<long long int>;
template class Field<char>;
template class Field<std::string>;
template class Field<double>;