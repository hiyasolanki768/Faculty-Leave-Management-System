#ifndef DEANAPPROVAL_H
#define DEANAPPROVAL_H

#include "Approval.h"

class DeanApproval : public Approval
{
public:
    // Default constructor
    DeanApproval();

    // Parameterized constructor
    DeanApproval(int id);

    // Overriding the base class function
    void processApproval() override;
};

#endif