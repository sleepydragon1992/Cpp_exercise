#include <iostream>
#include "MyException.h"
#include <stdexcept>
using namespace std;

void fun() {
    throw invalid_argument(" ");
}

int main() {
    try {
        fun();
    }
    catch (MyException & ex){
        cout << ex.what() << endl;
    }
}