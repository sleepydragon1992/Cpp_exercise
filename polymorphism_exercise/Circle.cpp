#include "Circle.h"
#include <iostream>
#define PI 3.14159265

using namespace std;

Circle::Circle(int radius, const string & color) : Shape(color), radius(radius) { }

int Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(int radius) {
    this->radius = radius;
}

void Circle::print() const{
    cout << "Circle radius = " << radius << ", subclass of ";
    Shape::print();
}

double Circle::getArea() const { 
    return radius * radius * PI;
}