/**
 *  @author Mackenzie Cribbs
 *  @date Spring 2020
 *  @file h13.cpp
 */
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;

string STUDENT = "mcribbs"; // Add your Canvas/occ-email ID

#include "h13.h"

// Implement your function here
string dataSets(const string& in)
{
    string result = "";
    ifstream infile{in};
    if (infile.fail())
    {
        result = "data/notfound.txt cannot be opened.";
    }

    //Initialization
    int dataSet{1};
    int repeat;
    ostringstream out;

    infile >> repeat;
    while(!infile.fail())
    {
    int sum{};
    int count{};
        while(repeat != 0)
        {
            double value;
            infile >> value;
            count += repeat;
            sum += repeat * value;
            infile >> repeat;
        }

        if (dataSet > 1)
        {
            out << "\n";
        }

        out << fixed << setprecision(4) << "data set " << dataSet << ": total values = " << to_string(count) << "\n" << "average value = " << (sum/count) << "\n";
        dataSet++;
        infile >> repeat;
    }

    return out.str();
}



///////////////// Student Testing /////////////////////////
int run()
{
    cout << "Student tests" << endl;
    return 0;
}