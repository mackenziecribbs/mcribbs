/**
    @file h35.cpp
    @author Mackenzie Cribbs
    @version what day and meeting time
*/
#include <string>
#include <stdexcept>
#include <iomanip>
#include <sstream>
using namespace std;

#include "h35.h"

string STUDENT = "mcribbs"; // Add your Canvas/occ-email ID

// Add your implementation here

Worker::Worker(const std::string& name, double rate)
    : name(name), rate(rate) {}
std::string Worker::getName() const { return name; }
double Worker::getRate() const { return rate; }

	HourlyWorker::HourlyWorker(const std::string& name, double rate)
	    : Worker(name, rate) {}
	std::string HourlyWorker::payInfo(int hours) const
	{
	    double pay = 0;
	    if (hours > 40) pay = getRate() * 40 + (hours - 40) * getRate() * 1.5;
	    else pay = getRate() * hours;

	    ostringstream out;
	    out << fixed << setprecision(2);
	    out << getName() << "(Hourly, $ " << getRate() << ") worked "
	        << hours << " hours. Pay: $ " << pay;
	    return "";
	}


    SalariedWorker::SalariedWorker(const std::string& name, double rate)
        : Worker(name, rate) {}
	std::string SalariedWorker::payInfo(int hours) const
	{
	    return "";
	}


/////////////// Student Tests ////////////////////////////
#include <iostream>
int run()
{
	cout << "Student testing" << endl;
	return 0;
}
