#include <iostream>
#include "MovablePoint.h"
using namespace std;

MovablePoint :: MovablePoint(int x, int y, int xSpeed, int ySpeed){}

int MovablePoint::getXSpeed() const { return xSpeed; }
int MovablePoint::getYSpeed() const { return ySpeed; }

void MovablePoint::setXSpeed(int xs) {
    xSpeed = xs;
}

void MovablePoint::setYSpeed(int ys) {
    ySpeed = ys;
}

void MovablePoint::print() const{
    cout << "Movable";
    Point:: print();
    cout << "Speed = " << "(" << xSpeed << "," << ySpeed << ")";
}

void MovablePoint::move() {
    Point::setX(Point::getX() + xSpeed);
    Point::setY(Point::getY() + ySpeed);
}