/**
 *  @author Mackenzie Cribbs
 *  @date Put the date here
 *  @file h26.cpp
 */
#include <string>
#include <iostream>
#include <memory>
using namespace std;

string STUDENT = "mcribbs"; // Add your Canvas/occ-email ID

#include "h26.h"
// Add your code here
/**
 * Read integers from a stream into a FlexArray.
 * @param[in] in the stream to read from.
 * @param[out] the FlexArray to store the data in
 * @return a reference to the modified FlexArray
 * @post size_ will contain the number of elements
 * @post data_ will contain exactly size_ elements
 * @post in will be at end of file or a non-integer
 */
FlexArray& readData(std::istream& in, FlexArray& a)
{
    // initialize a
    a.size_ = 0;
    size_t capacity = INITIAL_CAPACITY;
    a.data_.reset(new int[capacity]);

    int num;
    while (in >> num)
    {
        a.data_[a.size_] = num;
        a.size_++;
    }
    return a;
}


/**
 * Return a string representation of a FlexArray.
 * @param a the array to represent.
 * @return a comma separated, brace delimited contents.
 */
string toString(const FlexArray& a)
{
    string result;

    return result;
}

//////////////////////// STUDENT TESTING //////////////////////////
#include <iostream>
#include <sstream>
int run()
{
    cout << "Add your own tests here" << endl;
    // istringstream in("8 9 Q 4 5");
    // FlexArray a;
    // in >> a;
    // cout << "a->" << a << endl;
    return 0;
}