#include "example1.h"
#include <iostream>

using namespace std;

Point::Point(int x, int y) : x(x), y(y) {

}

int Point::getX() const {
    return x;
}

int Point::getY() const {
    return y;
}

void Point::setX(int x) {
    this->x = x;
}

void Point::setY(int y) {
    this-> y = y;
}

void Point::print() const {
    cout << "(" << x << "," << y << ")" << endl;
}

const Point Point::operator+(const Point & rhs) const {
    return Point(x + rhs.x, y + rhs.y);
}

ostream & operator<<(ostream & out, const Point & point) {
    out << "(" << point.x << "," << point.y << ")";
}

istream & operator>>(istream & in, Point & point){
    cout << "Enter x and y coordinate: ";
    in >> point.x >> point.y;
    return in;
}