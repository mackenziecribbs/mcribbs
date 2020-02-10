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

string vowels = "AEIOU";
char first = country.at(0);
string plain = "Isreal, Madagascar, Sri Lanka, Singapore, Monaco, Cuba, Cyprus";
string masculine = "Belize, Cambodge, Mexique, Mozambique, Zaire, Zimbabwe";
if (masculine.find(country) != string::npos)
{
    prefix = "el ";
}
else if(plain.find(country) != string::npos)
{
    prefix = "";
}
if (vowels.find(first) != string::npos )
{
    prefix = "L'";
}

if (country.substr(0,4) == islands || last == "es" || last == "is" || last == "os" || last == "as")
{
    prefix = "les ";
}
else if(country.substr(country.size() - 1) == "e" || country.substr(country.size() - 1) == "o")
{
    prefix = "La ";
}
else
{
    prefix = "Le ";
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
