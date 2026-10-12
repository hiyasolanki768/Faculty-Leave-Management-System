#include <iostream>
#include "DeanApproval.h"

using namespace std;

// Default constructor
DeanApproval::DeanApproval()
    : Approval()
{
}

// Parameterized constructor
DeanApproval::DeanApproval(int id)
    : Approval(id)
{
}

// Dean approval process
void DeanApproval::processApproval()
{
    status = "Approved by Dean";

    cout << "Dean Approval Process Completed." << endl;
}