#include <iostream>
#include <math.h>

using namespace std;

int main (void){
    uint64_t i = 0xAABBCCDDEEFFAA;
    uint32_t j = i & 0xFFFFFF;
    i = i >> 24;
    uint32_t k = i & 0xFFFFFF;
    cout << hex << j << endl;
    cout << hex << k << endl;
}