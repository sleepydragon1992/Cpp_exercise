#include <iostream>
#include <math.h>

using namespace std;



    double get_time(double dist, double firstRampAcc, double firstRampVel, double secondRampAcc, double targetVel, double firstRampDec, double secondRampDec, double layer_thickness){

     return ((dist - layer_thickness)- ((0.5*firstRampAcc*(firstRampVel/firstRampAcc)*(firstRampVel/firstRampAcc)) + firstRampVel*((targetVel-firstRampVel)/secondRampAcc) + (0.5*secondRampAcc*((targetVel-firstRampVel)/secondRampAcc)*((targetVel-firstRampVel)/secondRampAcc)) 
                + targetVel*((targetVel-firstRampVel)/firstRampDec) - (0.5*firstRampDec*((targetVel-firstRampVel)/firstRampDec)*((targetVel-firstRampVel)/firstRampDec)) + firstRampVel*((firstRampVel/secondRampDec)) - (0.5*secondRampDec*((firstRampVel/secondRampDec))*((firstRampVel/secondRampDec)))))/targetVel + firstRampVel/firstRampAcc + (targetVel-firstRampVel)/secondRampAcc + (targetVel-firstRampVel)/firstRampDec + (firstRampVel/secondRampDec);
    
    
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