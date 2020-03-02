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
    {
        if (inSingleCmt && ch == '\n')
        {
            inSingleCmt = false;
        }
        else if(inString && ch == '"')
        {
            inString = false;
        }
        else if(inMultiCmt && ch == '*' && cin.peek() == '/')
        {
            inMultiCmt = false;
            cin.get(ch);
        }
        else if(!inString && !inSingleCmt && !inMultiCmt)
        {
            if(ch == '"')
            {
                inString = true;
                cout.put(ch);
            }
            else if(ch == '/' && cin.peek() == '*')
            {
                inMultiCmt = true;
            }
            else if(ch == '/' && cin.peek() == '/')
            {
                inSingleCmt = true;
            }
        }
    cout.put(ch);
    }
}

//////////////// STUDENT TESTING ////////////////////
int run()
{
    //cout << "Student testing" << endl;
    strip();
    return 0;
}