/**
 *  @author Mackenzie Cribbs
 *  @date Spring 2020
 *  @file h17.cpp
 */
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <fstream>
#include <cctype>
using namespace std;

string STUDENT = "mcribbs"; // Add your Canvas/occ-email ID


#include "h17.h"

// Implement the function here
vector<string> fileToWords(const string& filename)
{
    ifstream infile{filename};
    if (infile.fail())
    {
        throw invalid_argument(filename + " not valid.");
    }

    vector<string> results;

    return results;
}




/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;
    // auto v = fileToWords("excluded.txt");
    // cout << "Excluded words:" << endl;
    // for (auto e : v) cout << " -" << e << endl;
    return 0;
}