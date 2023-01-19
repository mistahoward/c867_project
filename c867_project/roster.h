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
using std::cout;

class Roster {
 public:
    void add(string studentID, string firstName, string lastName, string emailAddress,
    int age, int daysInCourse1, int daysInCourse2, int daysInCourse3,
    DegreeProgram degreeProgram);
    void remove(string studentID);
    void printAll();
    void printAverageDaysInCourse(string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degreeProgram);
 private:
    Student* classRosterArray[5];
};

#endif /* roster_h */
