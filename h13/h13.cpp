/**
 *  @author Mackenzie Cribbs
 *  @date Spring 2020
 *  @file h13.cpp
 */
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;

string STUDENT = "mcribbs"; // Add your Canvas/occ-email ID

#include "h13.h"

// Implement your function here
string dataSets(const string& in)
{
    string result = "";

    ifstream infile{in};
    if (infile.fail())
    {
        result = "filename cannot be openned.";
    }

    return result;
}



///////////////// Student Testing /////////////////////////
int run()
{
    cout << "Student tests" << endl;
    return 0;
}