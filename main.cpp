#include "Field.hpp"


int main()
{
    Field my_field(10);
    int x = my_field.value_get();
    std::cout<<x;


    return 0;
}