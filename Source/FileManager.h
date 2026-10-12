#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include "LeaveRequest.h"

class FileManager
{
public:
    // Save leave requests into a file
    static void saveRequests(LeaveRequest* requests, int count);

    // Load leave requests from a file
    static int loadRequests(LeaveRequest* requests, int capacity);
};

#endif