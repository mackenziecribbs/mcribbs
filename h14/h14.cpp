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

    if (!prompt.empty() && !isspace(prompt.back()))
    {
        cout << prompt << ' ';
    }
    else if(!prompt.empty())
    {
        cout << prompt;
    }
    getline(cin, result);
    return result;
}
int getInt(const string& prompt)
{
    string result;
    result = getLine(prompt);
    while (true)
    {
        if (!result.empty())
        {
            istringstream in(result);
            int n;
            in >> n;
            if (!in.fail() && in.eof())
            {
                return n;
            }
            in >> ws;
            if (!in.fail() && in.eof())
            {
                return n;
            }


        }
        cout << "Invalid input, try again";
        result.clear();
        cin >> result;
    }


}
double getReal(const string& prompt)
{
    string result;
    result = getLine(prompt);
    while (true)
    {
        if (!result.empty())
        {
            istringstream in(result);
            double n;
            in >> n;
            if (!in.fail() && in.eof())
            {
                return n;
            }
            in >> ws;
            if (!in.fail() && in.eof())
            {
                return n;
            }
        }
        cout << "Invalid input, try again";
        result.clear();
        cin >> result;
    }

}
bool getYN(const string& prompt)
{
    string result;
    bool compare = false;
    result = getLine(prompt);
    while (true)
    {
        if (!result.empty())
        {
            if (result.front() == 'Y' || result.front() == 'y' || result.front() == 'N' || result.front() == 'n')
            {
                if (result.front() == 'Y' || result.front() == 'y')
                {
                    compare = true;
                    return compare;
                }
                else
                {
                    return compare;

                }
            }
            cin >> result;

        }
    }



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