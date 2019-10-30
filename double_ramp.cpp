#include <iostream>
#include <math.h>
#include "double_ramp.hpp"

Double_Ramp::Double_Ramp(){

}

double Double_Ramp::get_time(){

}

void Double_Ramp::set_parameter_first(double dist, double firstRampAcc, double firstRampVel, double secondRampAcc, double targetVel){
    this->a1 = firstRampAcc;
    this->v1 = firstRampVel;
    this->a2 = secondRampAcc;
    this->v2 = targetVel;
    this->d1 = dist;
}

void Double_Ramp::set_parameter_second(double dist, double firstRampAcc, double firstRampVel, double secondRampAcc, double targetVel, double firstRampDec, double secondRampDec, double layer_thickness){

    
}