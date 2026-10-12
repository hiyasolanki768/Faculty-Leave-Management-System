#include <iostream>
#include "Department.h"

using namespace std;

// Default constructor
Department::Department()
{
    departmentId = 0;
    departmentName = "";
}

// Parameterized constructor
Department::Department(int id, string name)
{
    departmentId = id;
    departmentName = name;
}

// Setter functions
void Department::setDepartmentId(int id)
{
    departmentId = id;
}

void Department::setDepartmentName(string name)
{
    departmentName = name;
}

// Getter functions
int Department::getDepartmentId()
{
    return departmentId;
}

string Department::getDepartmentName()
{
    return departmentName;
}

// Display department information
void Department::display()
{
    cout << "Department ID   : " << departmentId << endl;
    cout << "Department Name : " << departmentName << endl;
}