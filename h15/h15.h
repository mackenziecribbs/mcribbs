/**
    @file h15.h
    @author Mackenzie Cribbs
    @data Semester and Section
*/
#ifndef H15_H_
#define H15_H_

#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>

// Your code here
#if __cplusplus <= 199711L
template <typename T> // use this instead of 10+ different functions for each type
std::string to_string(const T& n)
{
    ostringstream out;
    out << std::fixed << (0 + n);
    return out.str();
}
#endif
#endif
