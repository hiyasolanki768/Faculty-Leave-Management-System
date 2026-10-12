#include <iostream>
#include <stdexcept>
#include "Validation.h"

using namespace std;

// Validate ID
void Validation::validateId(int id)
{
    if (id <= 0)
    {
        throw invalid_argument("ID must be greater than 0.");
    }
}

// Validate text
void Validation::validateText(string text)
{
    if (text.empty())
    {
        throw invalid_argument("Text cannot be empty.");
    }
}