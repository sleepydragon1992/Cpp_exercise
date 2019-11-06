#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
    private:
        int length;
        int width;

    public:
        Rectangle(int length = 1, int width = 1, const string & color = "red");
        int getLength() const;
        void setLength(int length);
        int getWidth() const;
        void setWidth(int width);   
        void print() const;
        double getArea() const;
};


#endif
