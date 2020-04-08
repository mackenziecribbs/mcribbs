/**
 *  @author Mackenzie Cribbs
 *  @date Spring 2020
 *  @file h21.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "mcribbs"; // Add your Canvas/occ-email ID

#include "h21.h"

// Add your code here
const int BPP = 4;
void composite (unsigned char * const bg, unsigned char * const fg, int width, int height)
{
    greenScreen(fg, width, height);
    unsigned char * dest = fg;
    unsigned char * src = bg;
    unsigned char * end = dest + width * height * BPP;
    while (dest != end)
    {
        if (*(dest + 3) == 0)
        {
            *dest = *src;
            *(dest + 1) = *(src + 1);
            *(dest + 2) = *(src + 2);
            *(dest + 3) = *(src + 3);
        }
        src += 4;
        dest += 4;
    }
}






/////////////// STUDENT TESTING ////////////////////

int run()
{
    // Add your own testing code here

    return 0;
}