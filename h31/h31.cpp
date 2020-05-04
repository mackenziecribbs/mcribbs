/**
 *  @author Mackenzie Cribbs
 *  @date Put the date here
 *  @file h31.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "mcribbs"; // Add your Canvas/occ-email ID


#include "h31.h"

// Add your code here
/**
     * Rotates an image in both the dx and dy directions.
     * Pixels wrap around as required.
     * @param dx the amount to shift in the x dimension.
     * @param dy the amount to shift in the y dimension
     * Assume 4 bits per pixel
     */
void Image::translate(int dx, int dy)
{

}

    /**
     * Overloaded subscript operators.
     * @param idx index from 0 < size
     * @throws out_of_range if invalid index
     */
const Pixel& Image::operator[](unsigned idx) const
{
    return m_pixels.at(idx);
}
Pixel& Image::operator[](unsigned idx)
{
    return m_pixels.at(idx);
}



/////////////// STUDENT TESTING ////////////////////

int run()
{
    // Just some samples for class
    cout << "Try some code on your own" << endl;

    return 0;
}