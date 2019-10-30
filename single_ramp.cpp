#include <iostream>
#include <math.h>
#include "single_ramp.hpp"

using namespace std;

    Single_Ramp::Single_Ramp(){
        layer_thickness = 0; // in case no layer thickness specified
    }

    
    double Single_Ramp::get_time(){
        double distance =  dist-layer_thickness;
        double a1       =  firstRampAcc;
        double v_mid    =  firstRampVel;
        double a2       =  secondRampAcc;
        double v_max    =  targetVel;
        double d1       =  firstRampDec;
        double d2       =  secondRampDec;

        double t1 = v_mid/a1;                   
        double t2 = (v_max-v_mid)/a2;           
        double t4 = (v_max-v_mid)/d1;           
        double t5 = (v_mid)/d2;           
    
        double d_travelled = (0.5*a1*t1*t1) + v_mid*t2 + (0.5*a2*t2*t2) 
                + v_max*t4 - (0.5*d1*t4*t4) + v_mid*t5 - (0.5*d2*t5*t5);         
        double t3 = (distance - d_travelled)/v_max;  
    return t1 + t2 + t3 + t4 + t5;
    }
    
    void Single_Ramp::set_parameter(double dist, double firstRampAcc, double firstRampVel, double secondRampAcc, double targetVel, double firstRampDec, double secondRampDec, double layer_thickness){
        this->dist            = dist;
        this->firstRampAcc    = firstRampAcc;
        this->firstRampVel    = firstRampVel;
        this->secondRampAcc   = secondRampAcc;
        this->targetVel       = targetVel;
        this->firstRampDec    = firstRampDec;
        this->secondRampDec   = secondRampDec;
        this->layer_thickness = layer_thickness;
    }   
