#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(int length, int width, const string & color) 
    : Shape(color), length(length), width(width) { }

int Rectangle::getLength() const {
    return length;
}
int Rectangle::getWidth() const {
    return width;
}

void Rectangle::setLength(int length) {
    this->length = length;
}
void Rectangle::setWidth(int width) {
    this->width = width;
}

void Rectangle::print() const { 
    cout << "Rectangle length = " << length << " width = " << width << ", subclass of ";
    Shape::print();    
}

double Rectangle::getArea() const {
    return length * width;
}