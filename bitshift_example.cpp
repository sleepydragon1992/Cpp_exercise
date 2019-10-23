#include <math.h>
#include <iostream>

using namespace std;

int main (void) {
    uint8_t i    = 0x23;
    uint8_t j    = 0x45;
    uint8_t k    = 0xAB;
    uint32_t ADC = (i << 16) | (j << 8) | k; 

    cout << hex << ADC << endl;

}
