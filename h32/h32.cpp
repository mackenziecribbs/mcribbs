/**
    @file h32.cpp
    @author Mackenzie Cribbs
    @version what day and meeting time
*/
#include <string>
#include <stdexcept>
using namespace std;

#include "h32.h"

string STUDENT = "mcribbs"; // Add your Canvas/occ-email ID

// Add your implementation here

bool find(const std::string& s, const std::string& t)
{
    if (s.size() < t.size()) return false;
    if (s.substr(0, t.size()) == t) return true;
    return find(s.substr(1), t);
}



////////////////// Student Testing //////////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;
    return 0;
}

