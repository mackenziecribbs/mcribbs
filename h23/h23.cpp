/**
 *  @author Mackenzie Cribbs
 *  @date Spring 2020
 *  @file h23.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "mcribbs"; // Add your Canvas/occ-email ID

#include "h23.h"

// Add your code here
int alternatingSum(const int a[], size_t size)
{
    int altSum = 0;
    for (size_t i = 0; i < size; ++i)
    {
        if (i % 2 == 0)
        {
            altSum += a[i];
        }
        else
        {
            altSum -= a[i];
        }
    }
    return altSum;
}

MinMax minMax(const double *ptr, size_t size)
{
    MinMax result;
    return result;
}

/////////////// STUDENT TESTING ////////////////////

int run()
{
    // Just some samples for class
    cout << "Try some code on your own" << endl;

    return 0;
}