/**
 *  @author Mackenzie Cribbs
 *  @date Spring 2020
 *  @file h14.cpp
 */
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

string STUDENT = "mcribbs"; // Add your Canvas/occ-email ID

#include "h14.h"

// Define your functions here
string getLine(const string& prompt)
{
    string result;


    if (!isspace(prompt.back()))
    {
        cout << prompt << ' ';
    }
    else if (prompt.empty())
    {
        cout << ' ';
        cin >> result;
    }
    else
    {
        cout << prompt;
    }

    return result;
}
int getInt(const string& prompt)
{
    int result{};

    return result;

}
double getReal(const string& prompt)
{
    double result{};

    return result;

}
bool getYN(const string& prompt)
{
    bool result{};

    return result;

}



/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;
    // do
    // {
    //     string s = getLine("Enter a string: ");
    //     cout << "s->\"" << s << "\"" << endl;

    //     int n = getInt("Enter an integer:");
    //     cout << "n->" << n << endl;

    //     double d = getReal("Enter a real number: ");
    //     cout << "d->" << d << endl;

    // } while (getYN("Try again? (Y/N)"));

    return 0;
}