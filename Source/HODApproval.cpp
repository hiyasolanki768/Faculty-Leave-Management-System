#include <iostream>
#include "HODApproval.h"

using namespace std;

// Default constructor
HODApproval::HODApproval()
    : Approval()
{
}

// Parameterized constructor
HODApproval::HODApproval(int id)
    : Approval(id)
{
}

// HOD approval process
void HODApproval::processApproval()
{
    status = "Approved by HOD";

    cout << "HOD Approval Process Completed." << endl;
}