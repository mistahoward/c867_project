//
//  student.h
//  c867_project
//
//  Created by Alex Howard on 1/18/23.
//

#ifndef C867_PROJECT_STUDENT_H_
#define C867_PROJECT_STUDENT_H_
#include <string>

using std::string;

class Student {
 private:
    string _student_id;
    string _first_name;
    string _last_name;
    string _email;
    int _age;
    int * _days_in_course;
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
    void setDaysInCourse(int * new_days_in_course) {
        _days_in_course = new_days_in_course;
    }
};

#endif  // C867_PROJECT_STUDENT_H_

