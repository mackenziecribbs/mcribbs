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
    Image& img = *this; // this image
    for (unsigned row = 0; row < height(); ++row)
    {
        for (int i = 0; i < dx; i++)
        {
            int last = width() - 1; // index of last column
            int r = row * width();
            auto temp = img[r + last];
            for (int j = last; j > 0; --j)
                img[r + j] = img[r + (j - 1)];
            img[r + 0] = temp;
        }
    }

    int lastRow = width() * (height() - 1);
    for (int i = 0; i < dy; i++)
    {
        for (unsigned col = 0; col < width(); ++col)
        {
            auto temp = img[lastRow + col];
            for (unsigned row = height() - 1; row > 0; --row)
            {
                img[row * width() + col] = img[(row - 1) * width() + col];
            }
            img[col] = temp;
        }
    }
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