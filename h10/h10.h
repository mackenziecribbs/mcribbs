#ifndef H10_H_
#define H10_H_
/**
    @file h10.h
    @author
    @version
*/
#include <string>

// Place your prototypes here
bool read (const std::string& str, int& age, bool ageb);
bool read (const std::string& str, double& gpa, bool gpab);
bool read (const std::string& str, std::string& name, bool nameb);
bool read (char& a, char sentinel);
#endif
