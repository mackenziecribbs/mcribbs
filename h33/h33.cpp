/**
    @file 33.cpp
    @author Mackenzie Cribbs
    @version what day and meeting time
*/
#include <string>
#include <stdexcept>
using namespace std;

#include "h33.h"

string STUDENT = "mcribbs"; // Add your Canvas/occ-email ID

// Add your implementation here

std::string stringClean(const std::string& str)
{
    if (str.size() < 2) return str;
    if (str.at(0) != str.at(1))
        return str.at(0) + stringClean(str.substr(1));
    return stringClean(str.substr(1));
}



////////////////// Student Testing //////////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;
    return 0;
}

