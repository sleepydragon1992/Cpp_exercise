#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main (void) {
    uint a = 0xAAAA;
    uint b = 0x5555;

    uint c = a & b;
    cout << hex << c << endl;
}