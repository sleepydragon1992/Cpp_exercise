#include <iostream>
#include <math.h>
#include "single_ramp.hpp"
#include "double_ramp.hpp"

using namespace std;

int main (void) {
    Single_Ramp single_ramp_test;
    single_ramp_test.set_parameter(8, 20, 4, 10, 9, 10, 20, 0.1);
    cout    << "time taken for single Ramp is: " 
            << single_ramp_test.get_time() << "s \n";

    Double_Ramp double_ramp_test;
    double_ramp_test.set_parameter_first(3, 11.6, 0.75, 5.8, 1.5);
    double_ramp_test.set_parameter_second(5, 20, 3.5, 10, 7, 10, 20, 0);
    cout << "time taken for double Ramp is: " << double_ramp_test.get_time() << "s" << endl;
}