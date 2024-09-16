// Learning C++ 
// Exercise 05_03
// Using Functions, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"

void initialise(StudentRecords&);

int main(){
    int id;
    StudentRecords SR;
    initialise(SR);

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    std::string student_str = SR.get_student_name(id);
    std::cout << "The GPA for " << student_str << " is " << SR.get_GPA(id) << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}

void initialise(StudentRecords& srec){
    srec.add_student(1, "George P. Burdell");
    srec.add_student(2, "Nancy Rhodes");

    srec.add_course(1, "Algebra", 5);
    srec.add_course(2, "Physics", 4);
    srec.add_course(3, "English", 3);
    srec.add_course(4, "Economics", 4);

    srec.add_grade(1, 1, 'B');
    srec.add_grade(1, 2, 'A');
    srec.add_grade(1, 3, 'C');
    srec.add_grade(2, 1, 'A');
    srec.add_grade(2, 2, 'A'); 
    srec.add_grade(2, 4, 'B');
}
