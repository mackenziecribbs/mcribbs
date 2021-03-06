/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h28.cpp
 */
#include <string>
using namespace std;

string STUDENT = "mcribbs"; // Add your Canvas/occ-email ID

#include "h28.h"

// Implement your class here
Employee::Employee() : m_salary(0) {}                                        // default: salary 0

Employee::Employee(const string& name, double salary)   // working constructor
    : m_data(name,0), m_salary(salary) {}

void Employee::salary(double newSalary)                     // change salary
{
    m_salary = newSalary;
}
double Employee::salary() const                             // retreive salary
{
    return m_salary;
}
string Employee::name() const                           // retrieve name
{
    return m_data.name();
}




//////////////////////// STUDENT TESTING //////////////////////////
#include <iostream>
#include <iomanip>
int run()
{
    cout << "Add your own tests here" << endl;
    Employee jeff{"Jeff Bezos", 2.347e9};
    cout << "jeff->" << jeff.name() << ", $ "
        << fixed << setprecision(2) << jeff.salary() << endl;
    // Change his salary
    jeff.salary(jeff.salary() / 1.5);
    cout << "jeff->" << jeff.name() << ", $ "
        << fixed << setprecision(2) << jeff.salary() << endl;

    return 0;
}