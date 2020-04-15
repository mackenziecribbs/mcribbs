/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h24.cpp
 */
#include <string>
#include <stdexcept>
// Other headers if necessary
using namespace std;

string STUDENT = "mcribbs"; // Add your Canvas/occ-email ID

#include "h24.h"

// Add your code here
bool sameSet(const int *aBeg, const int *aEnd, const int *bBeg, const int *bEnd)
{
    for (auto p = aBeg; p != aEnd; p++)
    {
        bool found = false;
        for (auto p2 = bBeg; !found && p2 != bEnd; p2++)
        {
            if (*p2 == *p)
            {
                found = true;
            }
        }
        if (!found)
        {
            return false;
        }
    }
       for (auto p = bBeg; p != bEnd; p++)
    {
        bool found = false;
        for (auto p2 = aBeg; !found && p2 != aEnd; p2++)
        {
            if (*p2 == *p)
            {
                found = true;
            }
        }
        if (!found)
        {
            return false;
        }
    }

        return true;
}

void copyEvens(const int a[], size_t aSize, int b[], size_t& bSize)
{
    if (bSize < aSize)
    {
        throw length_error("b not large enough");
    }
}


/////////////// STUDENT TESTING ////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;
    return 0;
}