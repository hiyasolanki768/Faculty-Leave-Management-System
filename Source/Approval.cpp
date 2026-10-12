#include <iostream>
#include "Approval.h"

using namespace std;

// Default constructor
Approval::Approval()
{
    leaveId = 0;
    status = "Pending";
}

// Parameterized constructor
Approval::Approval(int id)
{
    leaveId = id;
    status = "Pending";
}

// Virtual destructor
Approval::~Approval()
{
}

// Base class approval process
void Approval::processApproval()
{
    status = "Approved";
}

// Display approval information
void Approval::display()
{
    cout << "Leave ID : " << leaveId << endl;
    cout << "Status   : " << status << endl;
}