/**
 *  @author Mackenzie Cribbs
 *  @date Spring 2020
 *  @file h12.cpp
 */
#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

string STUDENT = "mcribbs"; // Add your Canvas/occ-email ID

// Write your function here
void expense()
{
    char ch;

    while(cin.get(ch) && cin.peek() != EOF)
    {
        if(ch == ' ' && cin.peek() == ' ')
        {
            cin.get(ch);
        }
        if(isdigit(cin.peek()))
        {
            break;
        }
        cout.put(ch);
        cout << ", ";
    }
}



//////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;
    expense();
    return 0;
}
