// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

enum class cow_purpose {dairy, meat, hide, pet};
enum class grocery_section {canned, frozen, meat, launcry, dairy, bakery};

int main(){
    int a;
    a = (int) cow_purpose::meat;
    std::cout << "a = " << a << std::endl;

    cow_purpose b;
    b = cow_purpose::meat;
    std::cout << "b = " << (int) b << std::endl;

    int meat = 8;
    a = meat;
    std::cout << "a = " << a << std::endl;


    std::cout << std::endl << std::endl;
    return (0);
}
