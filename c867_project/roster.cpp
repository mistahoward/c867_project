//
//  roster.cpp
//  c867_project
//
//  Created by Alex Howard on 1/18/23.
//

#include "roster.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;

const string studentData[] = {
    "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Alex,Howard,jhow119@wgu.edu,25,7,7,7,SOFTWARE"
};

void Roster::add(string student_id, string first_name, string last_name, string email, int age,
int days_in_course_1, int days_in_course_2, int days_in_course_3, DegreeProgram degree_program) {
    int days_into_array[3] = { days_in_course_1, days_in_course_2, days_in_course_3 };
    classRosterArray[++previous_index] = new Student(student_id, first_name,
    last_name, email, age, days_into_array, degree_program);
}

void Roster::remove(string student_id) {
    bool student_exists = false;
    bool deleted = false;
    for (int i = 0; i <= Roster::previous_index; i++) {
        if (classRosterArray[i]->student_id() == student_id) {
            student_exists = true;
            if (i < roster_size - 1) {
                // shifting data around & cleaning up the pointer
                Student* student_to_delete = classRosterArray[i];
                classRosterArray[i] = classRosterArray[roster_size - 1];
                classRosterArray[roster_size - 1] = student_to_delete;
            }
            Roster::previous_index--;
            deleted = true;
            break;
        }
    }
    if (student_exists && deleted) {
        cout << student_id << " removed from roster successfully.\n";
    } else {
        cout << student_id << " not found. Deletion failed.\n";
    }
    return 0;
}
