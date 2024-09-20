// Learning C++ 
// Challenge 06_03
// Upgrade to work with files, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "records.h"

void initialize(StudentRecords&);

int main(){
    int id;
    StudentRecords SR;
    
    initialize(SR);

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    SR.report_card(id);
    
    std::cout << std::endl << std::endl;
    return (0);
}

void initialize(StudentRecords& srec){
    std::ifstream inFile;
    std::string str;

    inFile.open("students.txt");
    if (inFile.fail())
        std::cout << std::endl << "Student file not found!" << std::endl;
    else{
        while (!inFile.eof()){
            getline(inFile, str);
            int id = stoi(str);
            getline(inFile, str);
            srec.add_student(id, str);
        }
        inFile.close();
    }

    inFile.open("courses.txt");
    if (inFile.fail())
        std::cout << std::endl << "Courses file not found!" << std::endl;
    else{
        while (!inFile.eof()){
            getline(inFile, str);
            int id = stoi(str);
            getline(inFile, str);
            std::string cname = str;
            getline(inFile, str);
            int credit = stoi(str);
            srec.add_course(id, cname, credit);
        }
        inFile.close();
    }

    inFile.open("grades.txt");
    if (inFile.fail())
        std::cout << std::endl << "Grades file not found!" << std::endl;
    else{
        while (!inFile.eof()){
            getline(inFile, str);
            int sid = stoi(str);
            getline(inFile, str);
            int cid = stoi(str);
            getline(inFile, str);
            char grade = str[0];
            srec.add_grade(sid, cid, grade);
        }
        inFile.close();
    }
}
