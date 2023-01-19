//
//  student.cpp
//  c867_project
//
//  Created by Alex Howard on 1/18/23.
//

#include "student.h"

// default constructor
Student::Student() {
    this -> _student_id = "";
    this -> _first_name = "";
    this -> _last_name = "";
    this -> _email = "";
    this -> _age = 0;
    this -> _days_in_course[0] = 0;
    this -> _days_in_course[1] = 0;
    this -> _days_in_course[2] = 0;
    this -> _degree_program = SOFTWARE;
}
// full constructor
Student::Student(string student_id, string first_name, string last_name, string email, int age, int days[], DegreeProgram degreeType) {
    this->_student_id = student_id;
    this->_first_name = first_name;
    this->_last_name = last_name;
    this->_email = email;
    this->_age = age;
    for (int i = 0; i < 3; i++) { this->_days_in_course[i] = days[i]; }
    this->_degree_program = degreeType;
}

void Student::print() {
    cout << _student_id << "First Name: " << _first_name << "\tLast Name: " << _last_name
    << "\tAge: " << _age << "\tDays In Course: {" << _days_in_course[0]  << ", "
    << _days_in_course[1] << ", " << _days_in_course[2] << "}\t Degree Program: "
    << _degree_program << "\n";
}

// getter functions
string Student::student_id() { return this->_student_id; }
string Student::first_name() { return this->_first_name; }
string Student::last_name() { return this->_last_name; }
string Student::email() { return this->_email; }
int Student::age() { return this->_age; }
int* Student::daysInCourse() { return this->_days_in_course; }

// mutator functions
void Student::setDaysInCourse(int *days_in_course) {
    for(int i = 0; i < 3; i++) {
        this->_days_in_course[i] = days_in_course[i];
    }
}
void Student::setEmail(string new_email) {
    this->_email = new_email;
}
void Student::setLastName(string new_last_name) {
    this->_last_name = new_last_name;
}
void Student::setFirstName(string new_first_name) {
    this->_first_name = new_first_name;
}
void Student::setStudentId(string new_id) {
    this->_student_id = new_id;
}

//Student::~Student() {
//    return;
//}
