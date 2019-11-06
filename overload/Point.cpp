/* The Point class Implementation file (Point.cpp) */
#include "Point.h"
#include <iostream>
using namespace std;
 
// Constructor - The default values are specified in the declaration
Point::Point(int x, int y) : x(x), y(y) { } // Using initializer list
 
// Getters
int Point::getX() const { return x; }
int Point::getY() const { return y; }
 
// Setters
void Point::setX(int x) { this->x = x; }
void Point::setY(int y) { this->y = y; }
 
// Public Functions
void Point::print() const {
   cout << "(" << x << "," << y << ")" << endl;
}
 
// Member function overloading '+' operator
const Point Point::operator+(const Point & rhs) const {
   return Point(x + rhs.x, y + rhs.y);
}
