// Learning C++ 
// Exercise 05_01
// Creating Functions, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"

int main(){
    int id;
    StudentRecords SR;

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    std::string student_name = " ";
    std::cout << "The GPA for " << student_name << " is " << SR.get_GPA(id) << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
