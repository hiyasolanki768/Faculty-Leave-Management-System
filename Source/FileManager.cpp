#include <iostream>
#include <fstream>
#include <sstream>
#include "FileManager.h"

using namespace std;

// Save leave requests into a file
void FileManager::saveRequests(LeaveRequest* requests, int count)
{
    ofstream file("Data/leave_requests.txt");

    if (!file)
    {
        cout << "Error: Could not open file for saving." << endl;
        return;
    }

    for (int i = 0; i < count; i++)
    {
        file << requests[i].getLeaveId() << "|"
             << requests[i].getFacultyId() << "|"
             << requests[i].getLeaveType() << "|"
             << requests[i].getStartDate() << "|"
             << requests[i].getEndDate() << "|"
             << requests[i].getReason() << endl;
    }

    file.close();

    cout << "Leave requests saved successfully." << endl;
}

// Load leave requests from a file
int FileManager::loadRequests(LeaveRequest* requests, int capacity)
{
    ifstream file("Data/leave_requests.txt");

    if (!file)
    {
        cout << "No previous data file found." << endl;
        return 0;
    }

    string line;
    int count = 0;

    while (getline(file, line) && count < capacity)
    {
        stringstream ss(line);

        string leaveId;
        string facultyId;
        string leaveType;
        string startDate;
        string endDate;
        string reason;

        getline(ss, leaveId, '|');
        getline(ss, facultyId, '|');
        getline(ss, leaveType, '|');
        getline(ss, startDate, '|');
        getline(ss, endDate, '|');
        getline(ss, reason, '|');

        requests[count] = LeaveRequest(
            stoi(leaveId),
            stoi(facultyId),
            leaveType,
            startDate,
            endDate,
            reason
        );

        count++;
    }

    file.close();

    cout << count << " leave request(s) loaded successfully." << endl;

    return count;
}