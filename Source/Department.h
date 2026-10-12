#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <string>
using namespace std;

class Department
{
private:
    int departmentId;
    string departmentName;

public:
    // Default constructor
    Department();

    // Parameterized constructor
    Department(int id, string name);

    // Setter functions
    void setDepartmentId(int id);
    void setDepartmentName(string name);

    // Getter functions
    int getDepartmentId();
    string getDepartmentName();

    // Display department information
    void display();
};

#endif