/* Test Function Template Overloading (FuncationTemplateOverloading.cpp) */
#include <iostream>
using namespace std;

template<typename T>
void mySwap(T &a, T &b);

template<>
void mySwap <int>(int & a, int &b);


int main() {
    double d1 = 1, d2 = 2;
    mySwap(d1, d2);

    int i1 = 1, i2 = 2;
    //mySwap(i1, i2);
}

template <typename T> 
void mySwap(T &a, T &b) {
    cout << "Template" << endl;
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <>
void mySwap<int>(int &a, int &b) {
    cout << "Specialization" << endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
}