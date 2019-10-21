#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main (void){
    std::vector<uint8_t> my_vector;
    for (int i = 0; i<7; i++){
        my_vector.push_back(i+70);
    }
    //my_vector = {12,23,34,45,0xAB,0xCD,0xEF};
    for (int x: my_vector) cout << hex << x << " ";
    cout << endl;
    uint32_t ADC_Sen = my_vector[1] * pow(2,16) + my_vector[2] * pow(2,8) + my_vector[3];
    cout << hex << ADC_Sen << endl;
    uint32_t ADC_Obj = my_vector[4] * pow(2,16) + my_vector[5] * pow(2,8) + my_vector[6];
    cout << hex << ADC_Obj << endl;
    return 0;
}
