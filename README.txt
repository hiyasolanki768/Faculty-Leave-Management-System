============================================================
              FACULTY LEAVE MANAGEMENT SYSTEM
============================================================

Project Code     : CPP56
Enrollment No.   : IU2541230522
Project Name     : Faculty Leave Management
Language         : C++
Development Tool : Visual Studio Code
Compiler         : GNU G++ (MSYS2 UCRT64)


1. PROJECT DESCRIPTION
------------------------------------------------------------

Faculty Leave Management is a C++ based application developed
to manage faculty leave requests.

The system allows the user to add, display, search, update and
delete leave records. It also provides a leave processing
system with HOD and Dean approval, report generation, data
validation and file-based data persistence.


2. MAIN FEATURES
------------------------------------------------------------

The system provides the following features:

1. Add Leave Record
2. Display Leave Records
3. Search Leave Record
4. Update Leave Record
5. Delete Leave Record
6. Process Leave Request
7. Generate Leave Report
8. Save Data
9. Load Data
10. Automatic Save Before Exit


3. CLASSES USED
------------------------------------------------------------

The project is divided into multiple classes and files.

Faculty
-------
Stores faculty information such as Faculty ID, name,
department and designation.

Department
----------
Stores department information such as Department ID and
department name.

LeaveRequest
------------
Stores leave request information such as Leave ID, Faculty ID,
leave type, start date, end date and reason.

Approval
--------
Base class used for the approval process.

HODApproval
-----------
Derived class used for HOD approval.

DeanApproval
------------
Derived class used for Dean approval.

LeaveSystem
-----------
Main system class responsible for managing leave requests,
displaying the menu and performing system operations.

FileManager
-----------
Responsible for saving and loading leave request records
using a text file.

Validation
----------
Provides validation functions for IDs and text values.


4. OOP CONCEPTS USED
------------------------------------------------------------

The following Object-Oriented Programming concepts are used:

1. Classes and Objects
2. Encapsulation
3. Constructors
4. Destructor
5. Inheritance
6. Runtime Polymorphism
7. Dynamic Memory Allocation
8. Access Specifiers


5. INHERITANCE AND POLYMORPHISM
------------------------------------------------------------

Approval is used as the base class.

HODApproval and DeanApproval are derived classes.

The virtual function processApproval() is overridden in both
derived classes.

An Approval pointer is used to call the overridden function.
This demonstrates runtime polymorphism.


6. DYNAMIC MEMORY
------------------------------------------------------------

LeaveSystem dynamically creates an array of LeaveRequest
objects.

Example:

requests = new LeaveRequest[capacity];

The allocated memory is released in the destructor using:

delete[] requests;

This demonstrates dynamic memory allocation and proper memory
management.


7. FILE HANDLING
------------------------------------------------------------

The project uses file handling to store leave request records
permanently.

Data is stored in:

Data/leave_requests.txt

The FileManager class provides functions to:

- Save leave requests
- Load leave requests

When the program starts, previously saved records are loaded.

Before the program exits, the current records are automatically
saved.


8. VALIDATION AND EXCEPTION HANDLING
------------------------------------------------------------

The Validation class checks user input.

The following validations are performed:

- IDs must be greater than zero.
- Text fields cannot be empty.

Invalid input is handled using exception handling with
try-catch blocks.

This prevents invalid data from being added or updated.


9. HOW TO COMPILE
------------------------------------------------------------

Open the terminal in the project folder and use:

g++ Source/main.cpp Source/Faculty.cpp Source/Department.cpp Source/LeaveSystem.cpp Source/LeaveRequest.cpp Source/FileManager.cpp Source/Validation.cpp Source/Approval.cpp Source/HODApproval.cpp Source/DeanApproval.cpp -o FacultyLeaveManagement.exe


10. HOW TO RUN
------------------------------------------------------------

After successful compilation, run:

.\FacultyLeaveManagement.exe


11. MAIN MENU
------------------------------------------------------------

The main menu contains:

1. Add Record
2. Display Records
3. Search Record
4. Update Record
5. Delete Record
6. Main Transaction / Process
7. Report
8. Save / Load
9. Exit


12. DATA PERSISTENCE
------------------------------------------------------------

The program loads previously saved records when it starts.

The user can also manually save or load data using the
Save / Load menu.

The program automatically saves the current records before
exiting.

Therefore, saved records remain available when the program is
opened again.


13. FOLDER STRUCTURE
------------------------------------------------------------

IU2541230522_CPP56_Project
|
|-- Source
|   |-- main.cpp
|   |-- Faculty.h
|   |-- Faculty.cpp
|   |-- Department.h
|   |-- Department.cpp
|   |-- LeaveRequest.h
|   |-- LeaveRequest.cpp
|   |-- Approval.h
|   |-- Approval.cpp
|   |-- HODApproval.h
|   |-- HODApproval.cpp
|   |-- DeanApproval.h
|   |-- DeanApproval.cpp
|   |-- LeaveSystem.h
|   |-- LeaveSystem.cpp
|   |-- FileManager.h
|   |-- FileManager.cpp
|   |-- Validation.h
|   |-- Validation.cpp
|
|-- Data
|   |-- leave_requests.txt
|
|-- Diagrams
|   |-- UseCaseDiagram.png
|   |-- ClassDiagram.png
|   |-- SequenceDiagram1.png
|   |-- SequenceDiagram2.png
|
|-- Screenshots
|
|-- Executable
|   |-- FacultyLeaveManagement.exe
|
|-- README.txt
|
|-- ProjectReport.pdf


14. SYSTEM REQUIREMENTS
------------------------------------------------------------

Hardware:
- Basic computer or laptop
- Minimum 4 GB RAM recommended

Software:
- Windows operating system
- Visual Studio Code
- GNU G++ compiler
- MSYS2 UCRT64 environment


15. PROJECT PURPOSE
------------------------------------------------------------

The purpose of this project is to demonstrate the use of
Object-Oriented Programming concepts in C++ by developing a
simple Faculty Leave Management System.

The project also demonstrates file handling, dynamic memory,
inheritance, runtime polymorphism, validation and exception
handling.


16. PROJECT STATUS
------------------------------------------------------------

The core Faculty Leave Management application has been
implemented and tested.

The project includes:

- Modular C++ source files
- Leave record management
- HOD and Dean approval processing
- Dynamic memory allocation
- File handling and persistence
- Input validation
- Exception handling
- Report generation
- Executable program


============================================================
                    END OF README
============================================================