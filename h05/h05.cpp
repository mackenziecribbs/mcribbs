/**
 *  @author Mackenzie Cribbs
 *  @date Spring 2020
 *  @file h05.cpp
 */
#include <string>
using namespace std;

string STUDENT = "mcribbs";  // Add your Canvas login name
// Write your function here

string toFrenchGender(const string& country)
{
string result = "who knows?";
string prefix = "";
string islands = "iles";
int len = country.size();
string last = country.substr(country.size() - 2);

if (country.substr(0,3) == islands || last == "es" || last == "is" || last == "os" || last == "as")
{
    prefix = "les ";
}

result = prefix + country;
return result;
}

/////////////// Optional Student Code /////////////////
int run()
{
    // You may add any code you like
    // It will be displayed with make run
    return 0;
}
