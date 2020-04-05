/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h20.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "WHO AM I?"; // Add your Canvas/occ-email ID

#include "h20.h"

// Add your code here
void greenScreen(unsigned char * const img, int width, int height)
{
unsigned char * p = img;
int BPP = 4;
const auto * end = img + width * height * BPP;
while (p != end)
{
    unsigned char& red = *p;
    unsigned char& green = *(p + 1);
    unsigned char& blue = *(p + 2);
    unsigned char& alpha = *(p + 3);
    if (green > 2 * max(red, blue))
    {
        red = green = blue = alpha = 0;
    }
    p += 4;
    }
}



/////////////// STUDENT TESTING ////////////////////
int run()
{
    // Write your own tests here

    return 0;
}