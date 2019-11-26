#include <iostream>
using namespace std;

template <typename T> 
void mySwap(T &a, T &b);


int main() {
    int i1 = 1, i2 = 2;
    mySwap(i1, i2);
    cout << "i1 is " << i1 << ", i2 is " << i2 << endl;

    char c1 = 'a', c2 = 'b';
    mySwap(c1, c2);
    cout << "c1 is " << c1 << ", c2 is " << c2 << endl;

    double d1 = 1.1, d2 = 2.2;
    mySwap(d1, d2);
    cout << "d1 is " << d1 << ", d2 is " << d2 << endl;
}

template <typename T>
void mySwap(T &a, T &b) {
   T temp;
   temp = a;
   a = b;
   b = temp;
}