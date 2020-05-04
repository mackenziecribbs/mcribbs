/**
 *  @file h30.cpp
 *  @author Mackenzie Cribbs
 *  @version Put the semester and meeting time here
 */
#include <string>
#include <stdexcept>
using namespace std;

string STUDENT = "mcribbs"; // Add your Canvas/occ-email ID

#include "h30.h"

// Implement your class members here
static int gcd(int x, int y)
{
    int r = x % y;
    while (r != 0)
    {
        x = y;
        y = r;
        r = x % y;
    }
    return y;
}
Fraction::Fraction(int n) : numerator_(n), denominator_(1) {}
Fraction::Fraction(int n, int d)
{
    if (d == 0) throw invalid_argument("Denominator cannot be 0");
    if (n == 0) { numerator_ = 0; denominator_ = 1; }
    else
    {
        auto g = gcd(abs(n), abs(d));
        numerator_ = n / g;
        denominator_ = abs(d) / g;
        if (d < 0) numerator_ = -numerator_;
    }
}


Fraction& Fraction::operator+=(const Fraction& rhs) { return *this; }
Fraction& Fraction::operator-=(const Fraction& rhs) { return *this; }
Fraction& Fraction::operator*=(const Fraction& rhs) { return *this; }
Fraction& Fraction::operator/=(const Fraction& rhs) { return *this; }

std::string Fraction::toString() const
{
    return "not implemented";
}


std::ostream& operator<<(std::ostream& out, const Fraction& f)
{
    return out;
}

const Fraction operator+(const Fraction& lhs, const Fraction& rhs) { return lhs; }
const Fraction operator-(const Fraction& lhs, const Fraction& rhs) { return lhs; }
const Fraction operator*(const Fraction& lhs, const Fraction& rhs) { return lhs; }
const Fraction operator/(const Fraction& lhs, const Fraction& rhs) { return lhs; }



/////////////// STUDENT TESTING ////////////////////

int run()
{
    cout << "Uncomment these and use make run to test." << endl;
    // Fraction a(3, 6); // 1/2 after reducing
    // Fraction b(1, 3); // 1/3
    // Fraction c(1, 6); // 1/6

    // Fraction sum = a + b + c;

    // cout << a << " + " << b << " + " << c
    //     << " = " << sum << endl;

    return 0;
}

