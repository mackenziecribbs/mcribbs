/**
 *  @author Mackenzie Cribbs
 *  @date Put the date here
 *  @file h25.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "mcribbs"; // Add your Canvas/occ-email ID

#include "h25.h"

// Add your code here
void reverse(char * s)
{
    char * p = s;
    char * end = p;
    while (*end != '\0')
    {
        end++;
    }
    end--;

    while (p < end)
    {
        //swap algorithm
        char temp = *p;
        *p = *end;
        *end = temp;

        p++;
        end--;
    }
}
const char * findStr(const char *str1, const char *str2)
{
    const char * p1 = str1;
    while (*p1 != '\0')
    {
        const char * p2 = p1;
        const char * p3 = str2;
        while (*p3 != '\0' && *p2 == *p3 && *p1 != '\0')
        {
          p2++;
          p3++;
        }
        if (*p3 == '\0')
        {
            return p1;
        }
        p1++;
    }


    return nullptr;
}



//////////////////////// STUDENT TESTING //////////////////////////

int run()
{
    cout << "Add your own tests here" << endl;
    return 0;
}