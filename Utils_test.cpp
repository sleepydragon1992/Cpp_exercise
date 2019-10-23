#include <iostream>
#include <math.h>
#include <cstdlib>
#include <time.h>

using namespace std;

int main (void){
    srand(time(0));

    for (int i = 0; i< 5; i++)
    {
        int j = rand();
        uint16_t k = j & 0xFFFF;
        cout << hex << k << endl;
    }
}