//
//  roster.cpp
//  c867_project
//
//  Created by Alex Howard on 1/18/23.
//

#include "roster.h"
#include "student.h"
#include <string>
#include <iostream>
using std::cout;
using std::string;

void Roster::add(string student_id, string first_name, string last_name, string email,
    int age, int days_in_course_1, int days_in_course_2, int days_in_course_3,
    DegreeProgram degree_program) {
    // takes values passed through args and uses the student constructor to create a new student
    // individual days need to be convereted into an array, first
    int days_into_array[3] = { days_in_course_1, days_in_course_2, days_in_course_3 };
    classRosterArray[++previous_index] = new Student(student_id, first_name,
    last_name, email, age, days_into_array, degree_program);
}

void Roster::remove(string working_student_id) {
    // assume the student doesn't exist
    bool student_exists = false;
    bool deleted = false;
    for (int i = 0; i <= Roster::previous_index; i++) {
        if (classRosterArray[i]->student_id() == working_student_id) {
            // if a match is found, the student exists
            student_exists = true;
            if (i < roster_size - 1) {
                // shifting data around & cleaning up the pointer
                Student* student_to_delete = classRosterArray[i];
                classRosterArray[i] = classRosterArray[roster_size - 1];
                classRosterArray[roster_size - 1] = student_to_delete;
            }
            Roster::previous_index--;
            // if there are no ref issues to this point, deleted is set to true
            deleted = true;
            break;
        }
    }
    if (student_exists && deleted) {
        cout << working_student_id << " removed from roster successfully.\n";
    } else {
        cout << working_student_id << " not found. Deletion failed.\n";
    }
}

void Roster::printAll() {
    for (int i = 0; i <= Roster::previous_index; i++) {
        // iterate through each student in the roster and run the print method
        Student* current_student = classRosterArray[i];
        current_student->print();
    }
}

void Roster::printAverageDaysInCourse(string working_student_id) {
    for(int i = 0; i <= Roster::previous_index; i++) {
        Student* current_student = classRosterArray[i];
        if (current_student->student_id() == working_student_id) {
            // if the student_id matches the current iteration, grab the array of days in course
            int* days_in_course = current_student->daysInCourse();
            int days_1 = 0;
            int days_2 = 0;
            int days_3 = 0;
            for (int j = 0; j < 3; j++) {
                // grab all the numbers and set them to individual values for easier calculation
                switch (j) {
                    case 0:
                        days_1 = days_in_course[0];
                        break;
                    case 1:
                        days_2 = days_in_course[1];
                        break;
                    case 2:
                        days_3 = days_in_course[2];
                        break;
                }
            }
            if (days_1 && days_2 && days_3) {
                // if numbers are found, calculate the average
                int average = (days_1 + days_2 + days_3) / 3;
                cout << "Average completion by student (in days) " << working_student_id << " is " <<
                average << "\n";
            } else {
                cout << "Could not calculate average. \n";
            }
            break;
        }
    }
}

void Roster::printInvalidEmails() {
    for (int i = 0; i <= Roster::previous_index; i++) {
        Student* current_student = classRosterArray[i];
        // grab the students email
        string working_email = current_student->email();
        // check if said student email has an @ and a ., and does _not_ have a space
        bool hasAt = working_email.find("@") != string::npos;
        bool hasDot = working_email.find(".") != string::npos;
        bool hasSpace = working_email.find(" ") != string::npos;
        if(hasAt && hasDot && !hasSpace) {
            // if it is good, break out of the for loop
            break;
        }
        // otherwise, the email has to be invalid
         cout << "Student ID " << current_student->student_id() << " has an invalid email of " <<
        working_email << ".\n";
    }
}

void Roster::printByDegreeProgram(DegreeProgram degree_program) {
    for (int i = 0; i <= Roster::previous_index; i++) {
        Student* current_student = classRosterArray[i];
        if (current_student->degree_program() == degree_program) {
            // same methodology as the print function just a comparison for the args and student degree program
            current_student->print();
        }
    }
}

Roster::~Roster() {
    // need to clean up the dynamically allocated memory
    cout << "Roster destructor called.\n\n";
    for (int i = 0; i < roster_size; i++) {
        cout << "Removing student " << classRosterArray[i]->student_id() << "\n";
        delete classRosterArray[i];
        // set to nullptr so it's no longer pointed to any memory - otherwise we could have a ref issue
        classRosterArray[i] = nullptr;
    }
}
