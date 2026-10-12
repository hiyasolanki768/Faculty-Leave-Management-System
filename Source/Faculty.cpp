#include <iostream>
#include "Faculty.h"

using namespace std;

// Default constructor
Faculty::Faculty()
{
    facultyId = 0;
    name = "";
    department = "";
    designation = "";
}

// Parameterized constructor
Faculty::Faculty(int id, string n, string dept, string desig)
{
    facultyId = id;
    name = n;
    department = dept;
    designation = desig;
}

// Setter function for Faculty ID
void Faculty::setFacultyId(int id)
{
    facultyId = id;
}

// Setter function for Name
void Faculty::setName(string n)
{
    name = n;
}

// Setter function for Department
void Faculty::setDepartment(string dept)
{
    department = dept;
}

// Setter function for Designation
void Faculty::setDesignation(string desig)
{
    designation = desig;
}

// Getter function for Faculty ID
int Faculty::getFacultyId()
{
    return facultyId;
}

// Getter function for Name
string Faculty::getName()
{
    return name;
}

// Getter function for Department
string Faculty::getDepartment()
{
    return department;
}

// Getter function for Designation
string Faculty::getDesignation()
{
    return designation;
}

// Display faculty information
void Faculty::display()
{
    cout << "Faculty ID  : " << facultyId << endl;
    cout << "Name        : " << name << endl;
    cout << "Department  : " << department << endl;
    cout << "Designation : " << designation << endl;
}