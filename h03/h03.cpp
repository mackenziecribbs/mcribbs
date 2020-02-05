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
		doubleresult = {3.4};
	}
	else if(letterGrade == "B")
	{
		doubleresult = {3.1};
	}
	else if(letterGrade == "B-")
	{
		doubleresult = {2.8};
	}
	else if(letterGrade == "C+")
	{
		doubleresult = {2.5};
	}
	else if(letterGrade == "C")
	{
		doubleresult = {2.2};
	}
	else if(letterGrade == "C-")
	{
		doubleresult = {1.9};
	}
	else if(letterGrade == "D+")
	{
		doubleresult = {1.6};
	}
	else if(letterGrade == "D")
	{
		doubleresult = {1.3};
	}
	else if(letterGrade == "D-")
	{
		doubleresult = {1.0};
	}
	else if(letterGrade == "A=" || "F+" || "F-")
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

	if(points == INVALID_INPUT)
	{
		cout << "Invalid Input";
	}
	else if(points == INVALID_COMBINATION)
	{
		cout << "Invalid combination";
	}
	else if(points >= 0)
	{
		cout << points;
	}
	cout << "]" << endl;
}
