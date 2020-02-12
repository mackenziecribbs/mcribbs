/**
 *  @Mackenzie Cribbs Put your name here
 *  @1/27/2020 Section 35993 Put the date here (Semester is OK)
 *  @file h00.cpp
 */
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

string STUDENT = "mcribbs";  // Add your Canvas login name
extern string ASSIGNMENT;

/**
 * One line describing what this program does.
 * @return 0 for success.
 */
int run()
{
    // Input: weight of a box of cereal in ounces
    // Output: weight of box in metric tons, boxes per ton.
    // Given: metric ton is 35,273.92 ounces.
    // Calculation: weight in tons->weight divided by metric tons per ounce
    // Calculation: boxes-> 1 divided by weight in tons.

    // Write your code here
    cout << STUDENT << "-" << ASSIGNMENT << ": ";
    cout << "Cereal Box Calculator" << endl;
    cout << string(50, '-') << endl;

    // Input
    cout << "Enter ounces per box of cereal: "; // prompt
    double ouncesPerBox; // store the input
    cin >> ouncesPerBox; // read the input

    // Processing section
    const double OUNCES_PER_TON = 35273.92;
    double weightInTons = ouncesPerBox / OUNCES_PER_TON;
    double boxesPerTon = 1.0 / weightInTons;

    // Output section
    cout << "Weight in metric tons, boxes per ton: ["
        << weightInTons << ", " << boxesPerTon << "]" << endl;


    double userTemp, userSpeed, windChill;
    cout << "Enter the temperature in Fahrenheit: ";
    cin >> userTemp;
    cout << "Enter the wind speed in mile-per-hour: ";
    cin >> userSpeed;

    windChill =  3.71 * sqrt(userSpeed) + 5.81 - (0.25 * userSpeed);
    windChill = windChill * (userTemp - 91.4);
    windChill = (windChill * 0.0817) + 91.4;

    cout << fixed << setprecision(3) << endl;
    cout << "Wind Chill: [" << windChill << "]" << endl;
    return 0;
}



