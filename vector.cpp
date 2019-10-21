//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main (void){
    std::vector<uint8_t> my_vector; 
    my_vector.push_back(0x40);
    my_vector.push_back(0x32);
    my_vector.push_back(0xAB);
    vector<uint8_t> your_vector = my_vector;
   
    uint16_t read_bits = your_vector[1] * pow(2,8) + your_vector[2]; 
   
   
    for (int x : your_vector)  cout << hex << x << " \n" ;
    cout << hex << read_bits << endl;
   return 0;
}