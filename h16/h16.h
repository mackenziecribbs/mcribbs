/**
    @file h16.h
    @author Mackenzie Cribbs
    @date Spring 2020
    Declarations for CS 150 Homework
*/
#ifndef H16_H_
#define H16_H_

#include <vector>
#include <stdexcept>
#include <string>
#include <iostream>
#include <sstream>

// Place your Point structure definitions here
struct Point
{
    int x;
    int y;
};

// Place your Triangle structure definitions here
struct Triangle
{
    Point p1;
    Point p2;
    Point p3;
};

void get(std::istream& in, Point& p);
/**
 * Reads a point in the form x,y.
 * @param in the input stream.
 * @param p the Point to populate
 */

void print(std::ostream& out, const Point& p);
/**
 * Displays a Point in the form (x, y).
 * @param out the stream to print on
 * @param p the Point to print
 */

double distanceBetween(const Point& a, const Point& b);
/**
 * Calculate the distance between two Points.
 * @param a the first point.
 * @param b the second point.
 * @return the distance as a double.
 */

Point midpoint(const Point& a, const Point& b);
/**
 * Given two points, find their midpoint.
 * @param a the first point.
 * @param b the second point.
 * @return the midpoint.
 */
double perimeter(const Triangle& t);
/**
 * Calculates the perimeter of the Triangle t.
 * @param t the Triangle to examine.
 * @return the perimeter.
 */
#endif
