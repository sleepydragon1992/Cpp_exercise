#include <iostream>
#include <stdexcept>
#include "exception_handling_example.h"
using namespace std;

PositiveInteger::PositiveInteger(int value){
    setValue(value);
}

void PositiveInteger::setValue(int v) {
    if (v > 0) {
        value = v;
    }   
    else {
        throw invalid_argument("what's up bro?");
    }
}

int PositiveInteger::getValue() const{
    return value;
}