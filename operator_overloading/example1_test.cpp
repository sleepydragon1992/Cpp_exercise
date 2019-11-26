#include "example1.h"
#include <iostream>

using namespace std;


int main() {
   Point p1(1, 2), p2;
 
   // Using overloaded operator <<
   cout << p1 << endl;    // support cascading
   operator<<(cout, p1);  // same as cout << p1
   cout << endl;
 
   // Using overloaded operator >>
   cin >> p1;
   cout << p1 << endl;
   operator>>(cin, p1);  // same as cin >> p1
   cout << p1 << endl;
   cin >> p1 >> p2;      // support cascading
   cout << p1 << endl;
   cout << p2 << endl;
}