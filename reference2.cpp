#include <iostream>
#include <math.h>
using namespace std;

void square(int &);

int main (void) {
   int number = 8;
   cout << "In main(): " << &number << endl;
   cout << number << endl;
   square( number);
   cout << number << endl;
}

void square (int & pNumber){
    cout << "In square(): " << &pNumber << endl;
    pNumber = pow(pNumber, 2);
}