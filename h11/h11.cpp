/**
 *  @author Mackenzie Cribbs
 *  @date Spring 2020
 *  @file h11.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "mcribbs"; // Add your Canvas/occ-email ID

// Write your function here
void strip()
{
    char ch;
    bool inSingleCmt = false;
    bool inMultiCmt = false;
    bool inString = false;

    while (cin.get(ch))
        if (!inSingleCmt)
        {
            cout.put(ch);
        }
        else
        {
            inSingleCmt = false;
        }
}

//////////////// STUDENT TESTING ////////////////////
int run()
{
    //cout << "Student testing" << endl;
    strip();
    return 0;
}