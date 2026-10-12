#ifndef LEAVEREQUEST_H
#define LEAVEREQUEST_H

#include <string>
using namespace std;

class LeaveRequest
{
private:
    int leaveId;
    int facultyId;
    string leaveType;
    string startDate;
    string endDate;
    string reason;

public:
    // Default constructor
    LeaveRequest();

    // Parameterized constructor
    LeaveRequest(int lId, int fId, string type,
                 string start, string end, string r);

    // Setter functions
    void setLeaveId(int id);
    void setFacultyId(int id);
    void setLeaveType(string type);
    void setStartDate(string start);
    void setEndDate(string end);
    void setReason(string r);

    // Getter functions
    int getLeaveId();
    int getFacultyId();
    string getLeaveType();
    string getStartDate();
    string getEndDate();
    string getReason();

    // Display leave request
    void display();
};

#endif