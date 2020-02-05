/**
 *  @author Mackenzie Cribbs
 *  @date Spring 2020
 *  @file h03.cpp
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
using stringIn = const string&;

string STUDENT = "mcribbs"; // Add your Canvas login name
extern string ASSIGNMENT;

// Function Prototypes
void printTitle();
string getInput();
double letterToPoints(stringIn letterGrade);
void printReport(double points);

// Constants
const double INVALID_COMBINATION = -1.0;
const double INVALID_INPUT = -2.0;

/**
 * Calculates the grade points for a letter grade.
 * @return 0 for success.
 */
int run()
{
	// Don't change anything inside this function
	printTitle();
	string letterGrade = getInput();
	double points = letterToPoints(letterGrade);
	printReport(points);

    return 0;
}

// Implement your functions here
void printTitle()
{
	cout << STUDENT << ASSIGNMENT << "-Grade Calculator" << endl;
	string dash{20, '-'};
	cout << dash << endl;
}

string getInput()
{
	string result;
	cout << "Enter your letter grade: ";
	getline(cin, result);
	return result;
}

double letterToPoints(stringIn letterGrade)
{
	double doubleresult {0.0};
	if (letterGrade == "A")
	{
		doubleresult = {4.0};
	}
	else if (letterGrade == "A-")
	{
		doubleresult = {3.7};
	}
	else if (letterGrade == "B+")
	{
		doubleresult = {3.3};
	}
	else if(letterGrade == "B")
	{
		doubleresult = {3.0};
	}
	else if(letterGrade == "B-")
	{
		doubleresult = {2.7};
	}
	else if(letterGrade == "C+")
	{
		doubleresult = {2.3};
	}
	else if(letterGrade == "C")
	{
		doubleresult = {2.0};
	}
	else if(letterGrade == "C-")
	{
		doubleresult = {1.7};
	}
	else if(letterGrade == "D+")
	{
		doubleresult = {1.3};
	}
	else if(letterGrade == "D")
	{
		doubleresult = {1.0};
	}
	else if(letterGrade == "D-")
	{
		doubleresult = {0.70};
	}
	else if(letterGrade == "A+" || "F+" || "F-")
	{
		doubleresult = {INVALID_COMBINATION};
	}
	else
	{
		doubleresult = {INVALID_INPUT};
	}
	return doubleresult;
}

void printReport(double points)
{
	cout << fixed << setprecision(1) << endl;
	cout << "Grade value is [";

	if(points == -2.0)
	{
		cout << "Invalid input";
	}
	else if(points == -1.0)
	{
		cout << "Invalid combination";
	}
	else if(points >= 0)
	{
		cout << points;
	}
	cout << "]" << endl;
}
