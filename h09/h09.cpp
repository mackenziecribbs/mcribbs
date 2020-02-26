/**
 *  @author Mackenzie Cribbs
 *  @date Spring 2020
 *  @file h09.cpp
 */
#include <string>
using namespace std;

string STUDENT = "mcribbs"; // Add your Canvas/occ-email ID

#include "h09.h"

// Put your function implementation (definitions) in this file
string digit(int n, const string& symbols)
{
    string result;

    string sub1 = symbols.substr(0,1);
    string sub2 = symbols.substr(1,1);
    string sub3 = symbols.substr(2,1);
    switch(n)
    {
        case 1: result = sub1;
        break;
        case 2: result = sub1 + sub1;
        break;
        case 3: result = sub1 + sub1 + sub1;
        break;
        case 4: result = sub1 + sub2;
        break;
        case 5: result = sub2;
        break;
        case 6: result = sub2 + sub1;
        break;
        case 7: result = sub2 + sub1 + sub1;
        break;
        case 8: result = sub2 + sub1 + sub1 + sub1;
        break;
        case 9: result = sub1 + sub3;
        break;
    }
    return result;
}

string toRoman(int n)
{
    string result;

    if(n <= 0 || n >= 4000)
    {
        result = "OUT OF RANGE";
    }

    return result;
}

/////////// Student Testing ///////////////////////
int run()
{
    return 0;
}