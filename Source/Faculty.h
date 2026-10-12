#ifndef FACULTY_H
#define FACULTY_H

#include <string>
using namespace std;

class Faculty
{
private:
    int facultyId;
    string name;
    string department;
    string designation;

public:
    // Default constructor
    Faculty();

    // Parameterized constructor
    Faculty(int id, string n, string dept, string desig);

    // Setter functions
    void setFacultyId(int id);
    void setName(string n);
    void setDepartment(string dept);
    void setDesignation(string desig);

    // Getter functions
    int getFacultyId();
    string getName();
    string getDepartment();
    string getDesignation();

    // Display faculty information
    void display();
};

#endif