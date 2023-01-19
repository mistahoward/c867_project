//
//  student.cpp
//  c867_project
//
//  Created by Alex Howard on 1/18/23.
//

#include "student.h"

const string studentData[] = {
    "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Alex,Howard,jhow119@wgu.edu,25,7,7,7,SOFTWARE"
};

Student::Student() {
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

void Student::print() {
    cout << _student_id << "First Name: " << _first_name << "\tLast Name: " << _last_name
    << "\tAge: " << _age << "\tDays In Course: {" << _days_in_course[0]  << ", "
    << _days_in_course[1] << ", " << _days_in_course[2] << "}\t Degree Program: "
    << _degree_program << std::endl;
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
