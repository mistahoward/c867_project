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
    void add(string studentID, string firstName, string lastName, string emailAddress,
    int age, int daysInCourse1, int daysInCourse2, int daysInCourse3,
    DegreeProgram degreeProgram);
    void remove(string studentID);
    void printAll();
    void printAverageDaysInCourse(string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degreeProgram);
    ~Roster();
 private:
    int previous_index = -1;
    const static int roster_size = 5;
    Student* classRosterArray[roster_size];
};

#endif /* roster_h */
