/**
 *  @author Mackenzie Cribbs
 *  @date Spring 2020
 *  @file h07.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "mcribbs"; // Add your Canvas/occ-email ID

#include "h07.h"

// Place your function definitions in this file.
string zipZap(const string& str)
{
    string result = "";
    size_t i{0};
    size_t len = str.size();

    if(len < 3)
    {
        result += str;
    }
    else
    {
        while(i < len - 2)
        {
            string subs = str.substr(i,3);

            if(subs.front() == 'z' && subs.back() == 'p')
            {
                result += "zp";
                i += 3;
            }
            else
            {
                result += subs.front();
                ++i;
                if(i == len - 2)
                    result += str.substr(len - 2);
            }
        }
    }

    return result;
}

int countCode(const string& str)
{
    int count{0};

    for(size_t len = str.size(), slen = 4, i = slen; i <= len; ++i)
    {
        string subs = str.substr(i - slen, slen);

        if(subs.substr(0,2) == "co" && subs.back() == 'e')
            count++;
    }
    return count;
}

string everyNth(const string& str, int n)
{
    string result = "";
    size_t n1 = n;
    for(size_t i = 0; i < str.size(); i += n1)
    {
        result += str.at(i);
    }

    return result;
}

bool prefixAgain(const string& str, int n)
{
    bool result = false;
    string prefix = str.substr(0, n);

    for(size_t i = 1, len = str.size(); i <= len; ++i)
    {
        string word = str.substr(i, n);

        if(word == prefix)
            result = true;
    }
    return result;
}

////////////////// STUDENT TESTING /////////////
int run()
{
    cout << "Student testing" << endl;
    return 0;
}