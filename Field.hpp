#pragma once
#include<iostream>
#include <type_traits>

template<typename T>
class Field
{
    protected:
        T value;
    public:
        Field(T value_);
        std::string type_of_field();
        T value_get();
        void value_set(T new_value);
};