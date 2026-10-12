#include <iostream>
#include "LeaveSystem.h"
#include "FileManager.h"
#include "Validation.h"
#include "HODApproval.h"
#include "DeanApproval.h"

using namespace std;

// Default constructor
LeaveSystem::LeaveSystem()
{
    capacity = 10;
    count = 0;

    // Dynamic memory allocation
    requests = new LeaveRequest[capacity];
}

// Destructor
LeaveSystem::~LeaveSystem()
{
    // Release dynamically allocated memory
    delete[] requests;
}

// Add a leave request
void LeaveSystem::addRequest()
{
    try
    {
        if (count >= capacity)
        {
            cout << "Storage is full." << endl;
            return;
        }

        int leaveId;
        int facultyId;
        string leaveType;
        string startDate;
        string endDate;
        string reason;

        cout << "\nEnter Leave ID: ";
        cin >> leaveId;

        Validation::validateId(leaveId);

        cout << "Enter Faculty ID: ";
        cin >> facultyId;

        Validation::validateId(facultyId);

        cin.ignore();

        cout << "Enter Leave Type: ";
        getline(cin, leaveType);

        Validation::validateText(leaveType);

        cout << "Enter Start Date: ";
        getline(cin, startDate);

        Validation::validateText(startDate);

        cout << "Enter End Date: ";
        getline(cin, endDate);

        Validation::validateText(endDate);

        cout << "Enter Reason: ";
        getline(cin, reason);

        Validation::validateText(reason);

        requests[count] = LeaveRequest(
            leaveId,
            facultyId,
            leaveType,
            startDate,
            endDate,
            reason
        );

        count++;

        cout << "\nLeave request added successfully." << endl;
    }
    catch (exception& e)
    {
        cout << "\nError: " << e.what() << endl;
        cout << "Leave request was not added." << endl;
    }
}

// Display all leave requests
void LeaveSystem::displayRequests()
{
    if (count == 0)
    {
        cout << "\nNo leave requests found." << endl;
        return;
    }

    cout << "\n===== Leave Requests =====" << endl;

    for (int i = 0; i < count; i++)
    {
        cout << "\nRequest " << i + 1 << endl;
        cout << "------------------------" << endl;

        requests[i].display();
    }
}

// Search a leave request
void LeaveSystem::searchRequest()
{
    int id;
    bool found = false;

    cout << "\nEnter Leave ID to search: ";
    cin >> id;

    for (int i = 0; i < count; i++)
    {
        if (requests[i].getLeaveId() == id)
        {
            cout << "\nLeave request found." << endl;
            cout << "------------------------" << endl;

            requests[i].display();

            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "\nLeave request not found." << endl;
    }
}

// Update a leave request
void LeaveSystem::updateRequest()
{
    try
    {
        int id;
        bool found = false;

        cout << "\nEnter Leave ID to update: ";
        cin >> id;

        Validation::validateId(id);

        for (int i = 0; i < count; i++)
        {
            if (requests[i].getLeaveId() == id)
            {
                string leaveType;
                string startDate;
                string endDate;
                string reason;

                cin.ignore();

                cout << "Enter New Leave Type: ";
                getline(cin, leaveType);

                Validation::validateText(leaveType);

                cout << "Enter New Start Date: ";
                getline(cin, startDate);

                Validation::validateText(startDate);

                cout << "Enter New End Date: ";
                getline(cin, endDate);

                Validation::validateText(endDate);

                cout << "Enter New Reason: ";
                getline(cin, reason);

                Validation::validateText(reason);

                requests[i].setLeaveType(leaveType);
                requests[i].setStartDate(startDate);
                requests[i].setEndDate(endDate);
                requests[i].setReason(reason);

                cout << "\nLeave request updated successfully." << endl;

                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << "\nLeave request not found." << endl;
        }
    }
    catch (exception& e)
    {
        cout << "\nError: " << e.what() << endl;
        cout << "Leave request was not updated." << endl;
    }
}

// Delete a leave request
void LeaveSystem::deleteRequest()
{
    int id;
    bool found = false;

    cout << "\nEnter Leave ID to delete: ";
    cin >> id;

    for (int i = 0; i < count; i++)
    {
        if (requests[i].getLeaveId() == id)
        {
            // Shift remaining records one position to the left
            for (int j = i; j < count - 1; j++)
            {
                requests[j] = requests[j + 1];
            }

            count--;

            cout << "\nLeave request deleted successfully." << endl;

            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "\nLeave request not found." << endl;
    }
}

// Process leave request
void LeaveSystem::processLeaveRequest()
{
    int id;
    bool found = false;

    cout << "\nEnter Leave ID to process: ";
    cin >> id;

    for (int i = 0; i < count; i++)
    {
        if (requests[i].getLeaveId() == id)
        {
            found = true;

            cout << "\nLeave request found." << endl;
            cout << "------------------------" << endl;

            requests[i].display();

            cout << "\nStarting HOD approval..." << endl;

            HODApproval hodApproval(id);

            Approval* approval = &hodApproval;

            approval->processApproval();

            cout << "\nHOD approval completed." << endl;

            cout << "\nStarting Dean approval..." << endl;

            DeanApproval deanApproval(id);

            approval = &deanApproval;

            approval->processApproval();

            cout << "\nDean approval completed." << endl;

            cout << "\nLeave request processing completed." << endl;

            break;
        }
    }

    if (!found)
    {
        cout << "\nLeave request not found." << endl;
    }
}

// Generate leave report
void LeaveSystem::generateReport()
{
    cout << "\n=================================" << endl;
    cout << "        LEAVE REPORT" << endl;
    cout << "=================================" << endl;

    if (count == 0)
    {
        cout << "No leave requests available." << endl;
        return;
    }

    cout << "Total Leave Requests : " << count << endl;

    cout << "\n----- Leave Request Details -----" << endl;

    for (int i = 0; i < count; i++)
    {
        cout << "\nRequest " << i + 1 << endl;
        cout << "------------------------" << endl;

        cout << "Leave ID   : "
             << requests[i].getLeaveId() << endl;

        cout << "Faculty ID : "
             << requests[i].getFacultyId() << endl;

        cout << "Leave Type : "
             << requests[i].getLeaveType() << endl;

        cout << "Start Date : "
             << requests[i].getStartDate() << endl;

        cout << "End Date   : "
             << requests[i].getEndDate() << endl;

        cout << "Reason     : "
             << requests[i].getReason() << endl;
    }

    cout << "\n=================================" << endl;
    cout << "Report generated successfully." << endl;
}

// Display menu
void LeaveSystem::showMenu()
{
    cout << "\n=================================" << endl;
    cout << "     FACULTY LEAVE MANAGEMENT" << endl;
    cout << "=================================" << endl;

    cout << "1. Add Record" << endl;
    cout << "2. Display Records" << endl;
    cout << "3. Search Record" << endl;
    cout << "4. Update Record" << endl;
    cout << "5. Delete Record" << endl;
    cout << "6. Main Transaction / Process" << endl;
    cout << "7. Report" << endl;
    cout << "8. Save / Load" << endl;
    cout << "9. Exit" << endl;
}
// Save all records
void LeaveSystem::saveData()
{
    FileManager::saveRequests(requests, count);
}

// Load all records
void LeaveSystem::loadData()
{
    count = FileManager::loadRequests(requests, capacity);
}