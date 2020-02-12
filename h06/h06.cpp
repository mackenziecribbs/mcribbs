 /**
 *  @author Mackenzie Cribbs
 *  @date Spring 2020
 *  @file h06.cpp
 */
#include <string>
#include <cctype>
using namespace std;

string STUDENT = "mcribbs";  // Add your Canvas login name

// Add your function here
int sumNums(const string& str)
{
	int result = 0;

	int sum{0};
	int num{0};
	int digit{};
	for (size_t i = 0, len = str.size(); i < len; ++i)
	{
		char ch = str.at(i);
		if (isdigit(ch))
		{
			digit = ch - 0;
			num = num * 10;
			num = num + digit;
		}
		else
		{
			sum += num;
			num = 0;
		}
	}

	return result;
}



/////////////// Optional Student Code /////////////////
#include <iostream>
int run()
{
	// Add any code you like here
	// cout << R"(sumNums("abc123xyz")->123? )" << sumNums("abc123xyz") << endl;
	// cout << R"(sumNums("aa11b33")->44? )" << sumNums("aa11b33") << endl;
	// cout << R"(sumNums("7 11")->18? )" << sumNums("7 11") << endl;

    return 0;
}


