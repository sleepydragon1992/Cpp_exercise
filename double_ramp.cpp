#include <iostream>
#include <math.h>
#include "double_ramp.hpp"

double linear_acc_dist (double v, double a, double t){
    return v*t + 0.5*a*t*t;
}

Double_Ramp::Double_Ramp(){

}

double Double_Ramp::get_time(){
    double t1 = v1/a1;
    double t2 = (v2-v1)/a2;
    double t3 = (d1 - linear_acc_dist(0,a1,t1)-linear_acc_dist(v1,a2,t2))/v2;
    double t4 = (v3-v2)/a3;
    double t5 = (v4-v3)/a4;
    double t7 = (v5-v4)/a5;
    double t8 = (0-v5)/a6;   
    double t6 = (d2 - linear_acc_dist(v2,a3,t4) - linear_acc_dist(v3,a4,t5)
     - linear_acc_dist(v4,a5,t7) - linear_acc_dist(v5,a6,t8))/v4;

    if (t6<0 || t3<0){
        return 0;
    }
    else {
        return t1 + t2 + t3 + t4 + t5 + t6 + t7 + t8;
    }
};

void Double_Ramp::set_parameter_first(double dist, double firstRampAcc, double firstRampVel, double secondRampAcc, double targetVel){
    this->d1 = dist;
    this->a1 = firstRampAcc;
    this->v1 = firstRampVel;
    this->a2 = secondRampAcc;
    this->v2 = targetVel;
};

void Double_Ramp::set_parameter_second(double dist, double firstRampAcc, double firstRampVel, double secondRampAcc, double targetVel, double firstRampDec, double secondRampDec, double layer_thickness){
    this->d2 =  dist;
    this->a3 =  firstRampAcc;
    this->v3 =  firstRampVel;
    this->a4 =  secondRampAcc;
    this->v4 =  targetVel;
    this->a5 = -firstRampDec;
    this->a6 = -secondRampAcc;
    this->v5 =  firstRampVel;

};