#include <iostream>
#include "LeaveSystem.h"

using namespace std;

int main()
{
    // Create LeaveSystem object
    LeaveSystem system;

    // Load previously saved records when program starts
    system.loadData();

    int choice;

    do
    {
        // Display main menu
        system.showMenu();

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                // Add Record
                system.addRequest();
                break;

            case 2:
                // Display Records
                system.displayRequests();
                break;

            case 3:
                // Search Record
                system.searchRequest();
                break;

            case 4:
                // Update Record
                system.updateRequest();
                break;

            case 5:
                // Delete Record
                system.deleteRequest();
                break;

            case 6:
                // Main Transaction / Process
                system.processLeaveRequest();
                break;

            case 7:
                // Report
                system.generateReport();
                break;

            case 8:
            {
                // Save / Load menu
                int saveLoadChoice;

                cout << "\n===== Save / Load =====" << endl;
                cout << "1. Save Data" << endl;
                cout << "2. Load Data" << endl;

                cout << "Enter your choice: ";
                cin >> saveLoadChoice;

                if (saveLoadChoice == 1)
                {
                    system.saveData();
                }
                else if (saveLoadChoice == 2)
                {
                    system.loadData();
                }
                else
                {
                    cout << "Invalid Save/Load choice." << endl;
                }

                break;
            }

            case 9:
                // Save data automatically before exiting
                system.saveData();
                
                // Exit
                cout << "\nThank you for using Faculty Leave Management."
                     << endl;
                cout << "Program exited successfully." << endl;
                break;

            default:
                cout << "\nInvalid choice. Please enter a number "
                     << "between 1 and 9." << endl;
        }

    } while (choice != 9);

    return 0;
}