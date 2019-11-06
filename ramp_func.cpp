#include <iostream>
#include <math.h>

using namespace std;



    double get_time(double dist, double firstRampAcc, double firstRampVel, double secondRampAcc, double targetVel, double firstRampDec, double secondRampDec, double layer_thickness){
        double t1 = firstRampVel/firstRampAcc;
        double t2 = (targetVel-firstRampVel)/secondRampAcc;
        double t4 = (targetVel-firstRampVel)/firstRampDec;
        double t5 = firstRampVel/secondRampDec;
    
        double t3 = ((dist-layer_thickness) - (0.5*firstRampAcc*t1*t1 + firstRampVel*t2 + 0.5*secondRampAcc*t2*t2 + targetVel*t4 - 0.5*firstRampDec*t4*t4 + firstRampVel*t5 -0.5*firstRampDec*t5*t5))/targetVel

        return t1 + t2 + t3 + t4 + t5;
    };


int main (void){
double dist             = 8;
double firstRampAcc     = 20;
double firstRampVel     = 4;
double secondRampAcc    = 10;
double targetVel        = 9;
double firstRampDec     = 10;
double secondRampDec    = 20;
double layer_thickness  = 0.1;

std::cout << get_time(dist,firstRampAcc,firstRampVel,secondRampAcc,targetVel,firstRampDec,secondRampDec,layer_thickness) << endl;
}