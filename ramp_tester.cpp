#include <iostream>
#include <math.h>
#include "single_ramp.hpp"


using namespace std;

int main (void) {
    Single_Ramp single_ramp_test;
    single_ramp_test.set_parameter(8, 20, 4, 10, 9, 10, 20, 0.1);
    cout    << "time taken for single Ramp is: " 
            << single_ramp_test.get_time() << "s \n";


}