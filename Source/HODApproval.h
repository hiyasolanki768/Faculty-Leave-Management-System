#ifndef HODAPPROVAL_H
#define HODAPPROVAL_H

#include "Approval.h"

class HODApproval : public Approval
{
public:
    // Default constructor
    HODApproval();

    // Parameterized constructor
    HODApproval(int id);

    // Overriding the base class function
    void processApproval() override;
};

#endif