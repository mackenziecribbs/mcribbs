/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h10.cpp
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string STUDENT = "mcribbs"; // Add your Canvas/occ-email ID

#include "h10.h"

// Place your function definitions in this file.

bool read(const string& str, int& age, bool ageb)
{
    cout << str;
    cin >> age;
    return false;
}
bool read(const string& str, double& gpa, bool gpab)
{
    string junk{""};
    cout << str;
    cin >> gpa;
    cin.ignore(1024, '\n');
    if (cin.fail())
    {
        cin >> junk;
        gpab = false;
    }
    else if (gpa >= 0.0 && gpa <= 4.0)
    {
        cin.clear();
        gpab = true;
    }
    return gpab;
}
bool read(const string& str, string& name, bool nameb = false)
{
    bool result;
    cout << str;
    if(nameb)
    {
        result = false;
    }
    else
    {
        result = true;
    }
    return result;
}
bool read(char& a, char sentinel)
{
    cin.get(a);
    bool result;
    if(a == sentinel)
    {
        result = false;
    }
    else
    {
        result = true;
    }
    return result;
}



////////////////// STUDENT TESTING /////////////
int run()
{
    cout << "Student testing" << endl;

    // int age;
    // if (read("How old are you? ", age))
    //     cout << "You don't look " << age << " years old!" << endl;
    // else
    //     cout << "Hmm. Doesn't look like you entered an int." << endl;

    // double gpa;
    // if (read("What is your gpa? ", gpa, true))
    //     cout << "Wow! " << fixed << setprecision(2) << gpa << "? I'm impressed." << endl;
    // else
    //     cout << "Sorry. I can't understand what you typed." << endl;

    // string name;
    // if (read("What is your full name? ", name, true))
    //     cout << "Hi " << name << ". Glad to meet you." << endl;
    // else
    //     cout << "Hmm. Is that your FULL name?" << endl;

    // cout << "Type a sentence ending in a period: ";
    // char ch;
    // while (read(ch, '.')) cout << ch;
    // cout << "." << endl;

    return 0;
}

