// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int fahrenheit = 100;
    int celcius;

    celcius = (5.0/(float)9) * (fahrenheit-32);
    std::cout << "fahrenheit: " << fahrenheit << std::endl;
    std::cout << "celcius:    " << celcius << std::endl;

    double weight = 10.99;

    std::cout << std::endl;
    std::cout << "Float         : " << weight << std::endl;
    std::cout << "Integer part  : " << (int)weight << std::endl;
    std::cout << "Decimals part : " << (int)((weight - (int)weight) * 10000) << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
