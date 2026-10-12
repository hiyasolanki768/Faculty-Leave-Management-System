#include <iostream>
#include "LeaveRequest.h"

using namespace std;

// Default constructor
LeaveRequest::LeaveRequest()
{
    leaveId = 0;
    facultyId = 0;
    leaveType = "";
    startDate = "";
    endDate = "";
    reason = "";
}

// Parameterized constructor
LeaveRequest::LeaveRequest(int lId, int fId, string type,
                           string start, string end, string r)
{
    leaveId = lId;
    facultyId = fId;
    leaveType = type;
    startDate = start;
    endDate = end;
    reason = r;
}

// Setter functions
void LeaveRequest::setLeaveId(int id)
{
    leaveId = id;
}

void LeaveRequest::setFacultyId(int id)
{
    facultyId = id;
}

void LeaveRequest::setLeaveType(string type)
{
    leaveType = type;
}

void LeaveRequest::setStartDate(string start)
{
    startDate = start;
}

void LeaveRequest::setEndDate(string end)
{
    endDate = end;
}

void LeaveRequest::setReason(string r)
{
    reason = r;
}

// Getter functions
int LeaveRequest::getLeaveId()
{
    return leaveId;
}

int LeaveRequest::getFacultyId()
{
    return facultyId;
}

string LeaveRequest::getLeaveType()
{
    return leaveType;
}

string LeaveRequest::getStartDate()
{
    return startDate;
}

string LeaveRequest::getEndDate()
{
    return endDate;
}

string LeaveRequest::getReason()
{
    return reason;
}

// Display leave request
void LeaveRequest::display()
{
    cout << "Leave ID      : " << leaveId << endl;
    cout << "Faculty ID    : " << facultyId << endl;
    cout << "Leave Type    : " << leaveType << endl;
    cout << "Start Date    : " << startDate << endl;
    cout << "End Date      : " << endDate << endl;
    cout << "Reason        : " << reason << endl;
}