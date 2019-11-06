#include <iostream>
#include <math.h>

using namespace std;

double get_time(double stage1_dist, double stage1_firstRampAcc, double stage1_firstRampVel, double stage1_secondRampAcc, double stage1_targetVel, double stage2.dist, double stage2.firstRampAcc, double stage2.firstRampVel, double stage2.secondRampAcc, double stage2.targetVel, double stage2.firstRampDec, double stage2.secondRampDec){
   
    double t1 = stage1_firstRampVel/stage1_firstRampAcc;
    double t2 = (stage1_targetVel-stage1_firstRampVel)/                    stage1_secondRampAcc;
    double t3;
    double t4 = (stage2.firstRampVel-stage1_targetVel)/                    stage2.firstRampAcc;
    double t5 = (stage2.targetVel-stage2.firstRampVel)/                    stage2.secondRampAcc;
    double t6;
    double t7 = (stage2.targetVel - stage2.firstRampVel)/                  stage2.firstRampDec;
    double t8 = stage2.firstRampVel/stage2.secondRampDec;

    t3 = (stage1_dist - (0.5*stage1_firstRampAcc*t1*t1   +  0.5*stage1_secondRampAcc*t2*t2  +  stage1_firstRampVel*t2))/stage1_targetVel ;

    t6 = (stage2.dist - (stage1_targetVel*t4 + 0.5*stage2.firstRampAcc*t4*t4 + stage2.firstRampVel*t5 + 0.5*stage2.secondRampAcc*t5*t5 + stage2.targetVel*t7 - 0.5*stage2.firstRampDec*t7*t7 + stage2.firstRampVel*t8 - 0.5*stage2.secondRampDec*t8*t8))/stage2.targetVel;

    return t1 + t2 + t3 + t4 + t5 + t6 + t7 + t8 ;
}




int main (void) {
    double stage1_dist              = 3;
    double stage1_firstRampAcc      = 11.6;
    double stage1_firstRampVel      = 0.75;
    double stage1_secondRampAcc     = 5.8;
    double stage1_targetVel         = 1.5;
    
    double stage2.dist              = 5;
    double stage2.firstRampAcc      = 20;
    double stage2.firstRampVel      = 3.5;
    double stage2.secondRampAcc     = 10;
    double stage2.targetVel         = 7;
    double stage2.firstRampDec      = 10;
    double stage2.secondRampDec     = 20; 

    double t = get_time(stage1_dist, stage1_firstRampAcc, stage1_firstRampVel, stage1_secondRampAcc, stage1_targetVel, stage2.dist, stage2.firstRampAcc, stage2.firstRampVel, stage2.secondRampAcc, stage2.targetVel, stage2.firstRampDec, stage2.secondRampDec);

    cout << "the time taken is: " << t << "s\n";
}