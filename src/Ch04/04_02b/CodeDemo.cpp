// Learning C++ 
// Exercise 04_02
// Switch Statements, by Eduardo Corpeño 

#include <iostream>

int main(){
    float operand_1, operand_2, result;
    char operation;

    std::cout << "Enter operand 1: " << std::flush;
    std::cin >> operand_1;
    std::cout << "Enter operand 2: " << std::flush;
    std::cin >> operand_2;
    std::cout << "Choose operation [ + - * / ]: " << std::flush;
    std::cin >> operation;

    switch(operation){
        case '+':
            result = operand_1 + operand_2;
            break;
        case '-':
            result = operand_1 - operand_2;
            break;
        case '*':
            result = operand_1 * operand_2;
            break;
        case '/':
            result = operand_1 / operand_2;
            break;
        default:
            std::cout << "Incoherent operator given; resuming with addition..." << std::endl;
            result = operand_1 + operand_2;

    }

    std::cout << "The result is " << result << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
