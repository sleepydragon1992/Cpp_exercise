#include <iostream>
#include <stdexcept>
#include "PositiveInteger.h"

using namespace std;


PositiveInteger:: PositiveInteger (int value) {
    setValue(value);
}

void PositiveInteger:: setValue(int v) {
    if (v > 0) {
        value = v;
    }
    else {
        throw invalid_argument("leu leu do ngoc");
    }
}

int PositiveInteger::getValue() const {
   return value;
}