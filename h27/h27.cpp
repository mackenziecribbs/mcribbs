/**
 *  @author Mackenzie Cribbs
 *  @date Put the date here
 *  @file h27.cpp
 */
#include <string>
using namespace std;

string STUDENT = "mcribbs"; // Add your Canvas/occ-email ID

#include "h27.h"

// Implement your class here
Bug::Bug(int startPos) // construct Bug at starting position
{
    position_ = startPos;
    direction_ = 1;
}

void  Bug::move() // move bug one unit in direction
{
    position_ += direction_;
}

void  Bug::turn()           // Change the direction from left to right or vice-versa
{
    direction_ *= -1;
}
int  Bug::position() const   // Return the position
{
    return position_;
}



//////////////////////// STUDENT TESTING //////////////////////////
#include <iostream>
int run()
{
    cout << "Add your own tests here" << endl;
    Bug fred(3);
    fred.move();
    cout << "fred is now at " << fred.position() << endl;

    return 0;
}