//
//  student.h
//  c867_project
//
//  Created by Alex Howard on 1/18/23.
//

#ifndef student_h
#define student_h
#include <string>
#include <iostream>
#include "degree.h"

using std::string;
using std::cout;

class Student {
 private:
    string _student_id;
    string _first_name;
    string _last_name;
    string _email;
    int _age;
    int _days_in_course[3];
    DegreeProgram _degree_program;
    
 public:
    // accessor functions
    string student_id();
    string first_name();
    string last_name();
    string email();
    int age();
    int * daysInCourse();
    DegreeProgram degree_program();
    
    // mutator functions
    void setStudentId(string new_id);
    void setFirstName(string new_first_name);
    void setLastName(string new_last_name);
    void setEmail(string new_email);
    void setAge(int new_age);
    void setDaysInCourse(int *days_in_course);
    void setDegreeProgram(DegreeProgram new_program);
    
    // print function
    void print();
    
    // constructors
    Student();
    Student(string student_id, string first_name,
    string last_name, string email, int age, int days[], 
    DegreeProgram degree_program);
};

#endif /* student_h */


