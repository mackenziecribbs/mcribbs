/**
 *  @author Mackenzie Cribbs
 *  @date 2/2/2020
 *  @file h02.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string STUDENT = "mcribbs";  // Add your Canvas login name
extern string ASSIGNMENT;

/**
 * Tells you how much diet soda you can drink without dying
 * @return 0 for success.
 */
int run()
{
// inputs: amount of artificial sweetener to kill mouse, weight of the mouse, weight of dieter

// Prompt and read the input
double mouseWeight, mouseDose, humanWeight;
cout << "Weight of the mouse in grams: ";
    cin >> mouseWeight;
cout << "Lethal dose for the mouse (in grams): ";
    cin >> mouseDose;
cout << "Desired weight of the dieter (in pounds): ";
    cin >> humanWeight;

const int gramsPerPound = 454;
const int weightOfSoda = 350; // grams
const double amountOfSweetner = 0.001;
double sweetenerInGrams = weightOfSoda * 0.001;

// Processing
int humanWeightInGrams = humanWeight * 454;
double mouseLethalDose = mouseDose / mouseWeight;
double humanLethalDose = mouseLethalDose * humanWeightInGrams;
long double sodaLethalDose = humanLethalDose / sweetenerInGrams;

// Output
cout << "Lethal dose in grams, cans is [" << humanLethalDose << ", " << sodaLethalDose << "]" << endl;

    return 0;
}
