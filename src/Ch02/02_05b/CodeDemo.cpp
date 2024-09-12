// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>

int main(){
    auto a = 8;
    auto b = 1234678901;
    auto c = 3.14f;
    auto d = 3.14;
    auto e = true;
    auto f = 'd';
    auto g = "C++ is amazing";

    std::cout << "a's type is " << typeid(a).name() << std::endl;
    std::cout << "b's type is " << typeid(b).name() << std::endl;
    std::cout << "c's type is " << typeid(c).name() << std::endl;
    std::cout << "d's type is " << typeid(d).name() << std::endl;
    std::cout << "e's type is " << typeid(e).name() << std::endl;
    std::cout << "f's type is " << typeid(f).name() << std::endl;
    std::cout << "g's type is " << typeid(g).name() << std::endl;

    std::cout << std::endl << g << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
