/* Test Driver Program for MovablePoint (TestMovablePoint.cpp) */
#include <iostream>
#include "MovablePoint.h"  // included "Point.h"
using namespace std;
 
int main() {
    // Using Object Pointer
   Point * ptrP1 = new MovablePoint(11, 12, 13, 14);   // upcast
   ptrP1->print(); // MovablePoint @ (11,12) Speed=(13,14)
                   //   - Run subclass version!!
   cout << endl;
   delete ptrP1;
 
   // Using Object Reference
   MovablePoint mp2(21, 22, 23, 24);
   Point & p2 = mp2;  // upcast
   p2.print();     // MovablePoint @ (21,22) Speed=(23,24)
                   //   - Run subclass version!!
   cout << endl;
 
   // Using object with explicit constructor
   Point p3 = MovablePoint(31, 32, 33, 34);  // upcast
   p3.print();     // Point @ (31,32) - Run superclass version!!
   cout << endl;

}