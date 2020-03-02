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
    while(cin.peek() != EOF) // This is the outer loop
    {
        while(cin.get(ch))
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
        }
        double total{0.0};
        double totalB{0.0};
        while(cin.peek() != '\n')
        {
            if(isdigit(cin.peek()))
            {
                cin >> totalB;
                total += totalB;
            }
            else
            {
                cin.get(ch);
            }
        }
    cout << fixed << setprecision(2);
    cout << ", " << total << endl;
    cin.get(ch);

    }
}


//////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;
    expense();
    return 0;
}
