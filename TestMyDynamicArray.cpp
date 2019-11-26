#include <iostream>
#include <iomanip>
#include "MyDynamicArray.h"

int main() {
    std::cout << std::fixed << std::setprecision(1) << std::boolalpha;

    MyDynamicArray a1(5);
    std::cout << a1 << std::endl;
    std::cout << a1.size() << std::endl;

    double d[3] = {1.1, 2.2, 3.3};
    MyDynamicArray a2(d, 3);
    std::cout << a2 << std::endl;

    MyDynamicArray a3(a2);
    std::cout << a3 << std::endl;

    //a1[2] = 9.9;
    //std::cout << a1[2] << std::endl;
    //std::cout << a1[22] << std::endl;
    
    a3 = a1;
    std::cout << a3 << std::endl;

    std::cout << (a1 == a3) << std::endl;
}