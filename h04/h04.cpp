/**
 *  @author Mackenzie Cribbs
 *  @date Spring 2020
 *  @file h04.cpp
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string STUDENT = "mcribbs";  // Add your Canvas login name
extern string ASSIGNMENT;

// Add your function declaration here
string getStatus(double gpa, int credits, int honorsCredits);

/**
 * Describe the purpose of your program here.
 * Returns if a student will graduate or not depending on credits and gpa
 * @return 0 for success.
 */

int run()
{
	// DON'T CHANGE ANYTHING IN THIS FUNCTION
    cout << STUDENT << "-" << ASSIGNMENT << "-Graduation Calculator" << endl;
	cout << "-----------------------------------------" << endl;

	cout << "Enter gpa, total credits and honors credits: ";
	double gpa;
	int credits, honorsCredits;
	cin >> gpa >> credits >> honorsCredits;

	// You will write this function
	string result = getStatus(gpa, credits, honorsCredits);

	cout << "Result is [\"" << result << "\"]" << endl;

    return 0;
}

// Implement your function here
string getStatus(double gpa, int credits, int honorsCredits)
{
	string result;
	if (gpa < 2.0 || credits < 180)
	{
		result = "not graduating";
	}
	if (gpa < 3.6)
	{
		result = "graduating";
	}
	else if (gpa >= 3.6 && gpa < 3.8 && honorsCredits < 15)
	{
		result = "cum laude";
	}
	else if (gpa >= 3.8 && honorsCredits < 15)
	{
		result = "magna cum laude";
	}
	else if (gpa >= 3.6 && gpa < 3.8 && honorsCredits < 15)
	{
		result = "magna cum laude";
	}
	else if (gpa >= 3.8 && honorsCredits >= 15)
	{
		result = "summa cum laude";
	}
	else
	{
		result = "not graduating";
	}


	return result;
}