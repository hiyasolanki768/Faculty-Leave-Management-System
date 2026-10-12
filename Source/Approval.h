#ifndef APPROVAL_H
#define APPROVAL_H

#include <string>
using namespace std;

class Approval
{
protected:
    int leaveId;
    string status;

public:
    // Default constructor
    Approval();

    // Parameterized constructor
    Approval(int id);

    // Virtual destructor
    virtual ~Approval();

    // Virtual function for runtime polymorphism
    virtual void processApproval();

    // Display approval information
    void display();
};

#endif