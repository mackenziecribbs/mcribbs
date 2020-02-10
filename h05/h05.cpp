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
string prefix;
// country end in letter e or o? feminine prefix -> la (space)
// otherwise? masculine prefix -> le (space)
// with these exceptions
//  belize cambodge mexique mozabique zaire zimbabwe (all Le)
// starts with a vowel? prefix L' (no space)
// plural? prefix is les (space)
// israel, madagascar, Sri Lanka, Singapore, Monaco,
// cuba and cyprus have no prefix
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
