//
//  roster.h
//  c867_project
//
//  Created by Alex Howard on 1/18/23.
//

#ifndef roster_h
#define roster_h
#include "student.h"
#include <iostream>
#include <string>

using std::string;

class Roster {
 public:
    void add(string student_id, string first_name, string last_name, string email,
    int age, int days_in_course_1, int days_in_course_2, int days_in_course_3,
    DegreeProgram degreeProgram);
    void remove(string studentID);
    void printAll();
    void printAverageDaysInCourse(string student_id);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degree_program);
    ~Roster();
 private:
    int previous_index = -1;
    const static int roster_size = 5;
    Student* classRosterArray[roster_size];
};

#endif /* roster_h */
