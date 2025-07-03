#pragma once
#include<iostream>


template<typename T>
class Field
{
    protected:
        T value;
    public:
        Field(T value_);

        T value_get();
        void value_set(T new_value);
};