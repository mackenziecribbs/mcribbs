/**
 *  @author Mackenzie Cribbs
 *  @date Spring 2020
 *  @file h16.cpp
 */
#include <string>
#include <cmath>
using namespace std;

string STUDENT = "mcribbs"; // Add your Canvas/occ-email ID

#include "h16.h"
// Add your implementation here
void get(istream& in, Point& p)
{
    char comma = ',';
    in >> p.x >> comma >> p.y;

}
void print(ostream& out, const Point& p)
{
    out << "(" << p.x << ", " << p.y << ")";
}
double distanceBetween(const Point& a, const Point& b)
{
    double distance;
    distance = sqrt(pow(b.y - a.y, 2) + pow(b.x-a.x, 2));

    return distance;

}
Point midpoint(const Point& a, const Point& b)
{

    Point midPoint;
    midPoint.x = (a.x+b.x) / 2;
    midPoint.y = (a.y+b.y) / 2;
    return midPoint;

}
double perimeter(const Triangle& t)
{
    double perimeter = distanceBetween(t.p1, t.p2);
    perimeter += distanceBetween(t.p2, t.p3);
    perimeter += distanceBetween(t.p3, t.p1);

    return perimeter;
}

/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;
    // cout << "Enter a point as (x, y): ";
    // Point p;
    // get(cin, p);
    // cout << "You entered ";
    // print(cout, p);
    // cout << endl;

    return 0;
}