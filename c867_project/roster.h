//
//  roster.h
//  c867_project
//
//  Created by Alex Howard on 1/18/23.
//

#ifndef roster_h
#define roster_h

#include <string>
#include "degree.h"
#include "student.h"

using std::string;

class Roster {
private:
   int previous_index = -1;
   const static int roster_size = 5;
 public:
    void add(string student_id, string first_name, string last_name, string email,
    int age, int days_in_course_1, int days_in_course_2, int days_in_course_3,
    DegreeProgram degree_program);
    void remove(string student_id);
    void printAll();
    void printAverageDaysInCourse(string student_id);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degree_program);
    Student* classRosterArray[roster_size];
//    ~Roster();
};

#endif /* roster_h */
