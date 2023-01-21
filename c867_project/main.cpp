//
//  main.cpp
//  c867_project
//
//  Created by Alex Howard on 1/18/23.
//

#include "roster.h"

// since the values are stored as strings, need to get the enums based off string values
DegreeProgram stringToEnum (string degree_string) {
    if(degree_string == "SECURITY") return SECURITY;
    if(degree_string == "NETWORK") return NETWORK;
    if(degree_string == "SOFTWARE") return SOFTWARE;
    return SECURITY;
}

int main() {
    const string studentData[] = {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Alex,Howard,jhow119@wgu.edu,25,7,7,7,SOFTWARE"
    };
    
    cout << "C867 - Scripting and Programming - Applications - C++ - 000733175 - Jacob 'Alex' Howard";
    Roster classRoster;
    int numberOfStudents = sizeof(studentData) / sizeof(studentData[0]);

    for(int i = 0; i < numberOfStudents; i++)
    {
        // grab the current string of values and save it to ws (working student)
        string ws = studentData[i];
        // grab the index of the comma
        int ci = ws.find(",");
        // using the comma index, grab the first value in the string (student ID)
        string wsid = ws.substr(0, ci);
        
        // creating a new variable to log the previous comma index
        int pci = ci + 1;
        // grab the next comma index
        ci = ws.find(",", pci);
        // using the comma index and the previous comma index, grab the next value in the string (first name)
        string wsfn = ws.substr(pci, ci - pci);
        
        // follow the same method for the remaining values
        pci = ci + 1;
        ci = ws.find(",", pci);
        string wsln = ws.substr(pci, ci - pci);
        
        pci = ci + 1;
        ci = ws.find(",", pci);
        string wse = ws.substr(pci, ci - pci);
        
        // Age is actually an int - need to use stod to convert to int from string
        pci = ci + 1;
        ci = ws.find(",", pci);
        int wsa = stod(ws.substr(pci, ci - pci));
        
        pci = ci + 1;
        ci = ws.find(",", pci);
        int wsd1 = stod(ws.substr(pci, ci - pci));
        
        pci = ci + 1;
        ci = ws.find(",", pci);
        int wsd2 = stod(ws.substr(pci, ci - pci));
        
        pci = ci + 1;
        ci = ws.find(",", pci);
        int wsd3 = stod(ws.substr(pci, ci - pci));
        
        pci = ci + 1;
        ci = ws.find(",", pci);
        DegreeProgram wsdp = stringToEnum(ws.substr(pci, ci - pci));
        
        classRoster.add(wsid, wsfn, wsln, wse, wsa, wsd1, wsd2, wsd3, wsdp);
    }
    
    classRoster.printAll();
    return 0;
}
