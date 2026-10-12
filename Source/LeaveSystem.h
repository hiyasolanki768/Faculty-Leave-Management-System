#ifndef LEAVESYSTEM_H
#define LEAVESYSTEM_H

#include "LeaveRequest.h"

class LeaveSystem
{
private:
    LeaveRequest* requests;
    int capacity;
    int count;

public:
    // Default constructor
    LeaveSystem();

    // Destructor
    ~LeaveSystem();

    // Add a leave request
    void addRequest();

    // Display all leave requests
    void displayRequests();

    // Search a leave request
    void searchRequest();

    // Update a leave request
    void updateRequest();

    // Delete a leave request
    void deleteRequest();

    // Save all records
    void saveData();

    // Load all records
    void loadData();

    // Process leave request
    void processLeaveRequest();

    // Generate leave report
    void generateReport();

    // Display menu
    void showMenu();
};

#endif