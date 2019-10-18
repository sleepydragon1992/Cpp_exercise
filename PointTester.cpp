#include <iostream>
#include "Point.h"

using namespace std;

int main () {
    Point myPoint(0,0);
    myPoint.setX(2);
    myPoint.setY(4);
    myPoint.print();
    cout << myPoint.getArgument() << endl;
    cout << myPoint.getMagnitude() << endl;
    return 0;
}