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
    string student_id() {
        return _student_id;
    }
    string first_name() {
        return _first_name;
    }
    string last_name() {
        return _last_name;
    }
    string email() {
        return _email;
    }
    int age() {
        return _age;
    }
    int * daysInCourse() {
        return _days_in_course;
    }
    
    // mutator functions
    void setStudentId(string new_id) {
        _student_id = new_id;
    }
    void setFirstName(string new_first_name) {
        _first_name = new_first_name;
    }
    void setLastName(string new_last_name) {
        _last_name = new_last_name;
    }
    void setEmail(string new_email) {
        _email = new_email;
    }
    void setAge(int new_age) {
        _age = new_age;
    }
    void setDaysInCourse(int *days_in_course)
    {
        for(int i = 0; i < 3; i++) {
            _days_in_course[i] = days_in_course[i];
        }
    }
    // print function
    void print() {
        cout << _student_id << "First Name: " << _first_name << "\tLast Name: " << _last_name
        << "\tAge: " << _age << "\tDays In Course: {" << _days_in_course[0]  << ", "
        << _days_in_course[1] << ", " << _days_in_course[2] << "}\t Degree Program: "
        << _degree_program << std::endl;
    }
    // default constructor
    Student() {
        this -> _student_id = "";
        this -> _first_name = "";
        this -> _last_name = "";
        this -> _email = "";
        this -> _age = 0;
        this -> _days_in_course[0] = 0;
        this -> _days_in_course[1] = 0;
        this -> _days_in_course[2] = 0;
        this -> _degree_program = "";
    }
};

#endif  // C867_PROJECT_STUDENT_H_

