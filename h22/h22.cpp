/**
 *  @author Mackenzie Cribbs
 *  @date Spring 2020
 *  @file h22.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "mcribbs"; // Add your Canvas/occ-email ID

#include "h22.h"

// Add your code here
void flip(UC* const img, int width, int height, Direction dir)
{
    if (dir == Direction::LtoR || dir == Direction::RtoL)
    {
        for (int row = 0; row < height; ++row)
        {
            Pixel * front = reinterpret_cast<Pixel*>(img) + row * width; // allows the img to be a different kind of pointer
            Pixel * back = front + width - 1; // last pixel
            while (front < back)
            {
                auto temp = *front;
                *front = *back;
                *back = temp;
                front++;
                back--;
            }
        }
    }
    else // top to bottom or vice-versa
    {
        for (int col = 0; col < width; ++col)
        {
            Pixel * top = reinterpret_cast<Pixel*>(img) + col;
            Pixel * bottom = top + width * (height - 1);
            while (top < bottom)
            {
                auto temp = *top; // swap alg
                *top = *bottom;
                *bottom = temp;
                top += width;
                bottom -= width;
            }
        }
    }
}
void mirror(UC* const img, int width, int height, Direction dir)
{
     if (dir == Direction::LtoR || dir == Direction::RtoL)
    {
        for (int row = 0; row < height; ++row)
        {
            Pixel * front = reinterpret_cast<Pixel*>(img) + row * width; // allows the img to be a different kind of pointer
            Pixel * back = front + width - 1; // last pixel
            while (front < back)
            {
                if (dir == Direction::RtoL)
                {
                    *front = *back;
                }
                else
                {
                    *back = *front;
                }
                front++;
                back--;
            }
        }
    }
    else // top to bottom or vice-versa
    {
        for (int col = 0; col < width; ++col)
        {
            Pixel * top = reinterpret_cast<Pixel*>(img) + col;
            Pixel * bottom = top + width * (height - 1);
            while (top < bottom)
            {
                if (dir == Direction::TtoB)
                {
                    *bottom = *top;
                }
                else
                {
                    *top = *bottom;
                }
                top += width;
                bottom -= width;
            }
        }
    }

}

/////////////// STUDENT TESTING ////////////////////

int run()
{
    // Just some samples for class
    cout << "Try some code on your own" << endl;

    return 0;
}