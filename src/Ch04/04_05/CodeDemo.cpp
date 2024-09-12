// Learning C++ 
// Challenge 04_05
// Calculate a GPA, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include <map>
#include "records.h"

int main(){
    float GPA = 0.0f;
    int id;
    
    std::vector<Student> students = {Student(1, "George P. Burdell"), 
                                     Student(2, "Nancy Rhodes")};

    std::vector<Course> courses = {Course(1, "Algebra", 5),
                                   Course(2, "Physics", 4),
                                   Course(3, "English", 3),
                                   Course(4, "Economics", 4)};

    std::vector<Grade> grades = {Grade(1, 1, 'B'), Grade(1, 2, 'A'), Grade(1, 3, 'C'),
                                 Grade(2, 1, 'A'), Grade(2, 2, 'A'), Grade(2, 4, 'B')};

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    std::map<char, float> grade2point = {
        { 'A', 4.0 },
        { 'B', 3.0 },
        { 'C', 2.0 },
        { 'D', 1.0 },
        { 'F', 0.0 }
    };
    // Calculate the GPA for the selected student.
    double sum_creditXgrade = 0.0;
    double sum_credits = 0.0;
    for (Grade& grade: grades){
        if (id == grade.get_student_id()){
            sum_credits += courses[grade.get_course_id()-1].get_credits();
            sum_creditXgrade += courses[grade.get_course_id()-1].get_credits() * grade2point.at(grade.get_grade());
        }
    }
    GPA = sum_creditXgrade / sum_credits;

    std::string student_str;
    student_str = students[id-1].get_name();

    std::cout << "The GPA for " << student_str << " is " << GPA << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
