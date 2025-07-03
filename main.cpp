#include "Field.hpp"


int main()
{
    std::string t = "tttt";
    Field my_field(t);
    auto x = my_field.value_get();
    std::cout<<my_field.type_of_field();


    return 0;
}