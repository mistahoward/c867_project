//
//  student.h
//  c867_project
//
//  Created by Alex Howard on 1/18/23.
//

#ifndef C867_PROJECT_STUDENT_H_
#define C867_PROJECT_STUDENT_H_
#include <string>
#include <iostream>

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
    string _degree_program;
    
 public:
    // accessor functions
    string student_id();
    string first_name();
    string last_name();
    string email();
    int age();
    int * daysInCourse();
    
    // mutator functions
    void setStudentId(string new_id);
    void setFirstName(string new_first_name);
    void setLastName(string new_last_name);
    void setEmail(string new_email);
    void setAge(int new_age);
    void setDaysInCourse(int *days_in_course);
    
    // print function
    void print();
    
    // constructor
    Student();
};

#endif  // C867_PROJECT_STUDENT_H_

