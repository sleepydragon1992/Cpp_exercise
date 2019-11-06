#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
    private: 
        int radius;

    public:
        Circle(int radius = 1, const string & color = "red");
        int getRadius() const;
        void setRadius(int radius);
        void print() const;
        double getArea() const;
};

#endif