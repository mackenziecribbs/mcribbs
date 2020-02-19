/**
 *  @author Mackenzie Cribbs
 *  @date Spring 2020
 *  @file h09.cpp
 */
#include <string>
using namespace std;

string STUDENT = "mcribbs"; // Add your Canvas/occ-email ID

#include "h08.h"

// Put your function implementation (definitions) in this file
string codeForDigit(int digit)
{
    string result = "";
    switch(digit)
    {
        case 1: result = ":::||";
        break;
        case 2: result = "::|:|";
        break;
        case 3: result = "::||:";
        break;
        case 4: result = ":|::|";
        break;
        case 5: result = ":|:|:";
        break;
        case 6: result = ":||::";
        break;
        case 7: result = "|:::|";
        break;
        case 8: result = "|::|:";
        break;
        case 9: result = "|:|::";
        break;
        case 0: result = "||:::";
        break;
    }

    return result;
}

int checkDigit(int zip)
{
    int result{0};
    int sum{0};

    for(int i = 0; i < 5; ++i)
    {
        sum += zip % 10;
        zip /= 10;

    }
    result = 10 - (sum % 10);
    if(result % 10 == 10)
    {
        result = 0;
    }
    return result;
}

string barCode(int zip)
{
    string result = "";
    int check = zip;
    int num;
    for(int i = 0; i < 5; ++i)
    {
        num = zip % 10;
        result = codeForDigit(num) + result;
        zip /= 10;
    }
    result = codeForDigit(checkDigit(check));
    result = "|" + result;
    return result;
}
/////////// Student Testing ///////////////////////
#include <iostream>
int run()
{
    // You can add code that "runs" here
    return 0;
}