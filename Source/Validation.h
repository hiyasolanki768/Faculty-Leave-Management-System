#ifndef VALIDATION_H
#define VALIDATION_H

#include <string>

using namespace std;

class Validation
{
public:
    // Check whether an ID is valid
    static void validateId(int id);

    // Check whether text is empty
    static void validateText(string text);
};

#endif