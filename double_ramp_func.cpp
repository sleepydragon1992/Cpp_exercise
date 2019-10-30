#include <iostream>
#include <math.h>

using namespace std;

double get_time(double stage1_dist, double stage1_firstRampAcc, double stage1_firstRampVel, double stage1_secondRampAcc, double stage1_targetVel, double stage2_dist, double stage2_firstRampAcc, double stage2_firstRampVel, double stage2_secondRampAcc, double stage2_targetVel, double stage2_firstRampDec, double stage2_secondRampDec){
   
    double t1 = stage1_firstRampVel/stage1_firstRampAcc;
    double t2 = (stage1_targetVel-stage1_firstRampVel)/                    stage1_secondRampAcc;
    double t3;
    double t4 = (stage2_firstRampVel-stage1_targetVel)/                    stage2_firstRampAcc;
    double t5 = (stage2_targetVel-stage2_firstRampVel)/                    stage2_secondRampAcc;
    double t6;
    double t7 = (stage2_targetVel - stage2_firstRampVel)/                  stage2_firstRampDec;
    double t8 = stage2_firstRampVel/stage2_secondRampDec;

    t3 = (stage1_dist - (0.5*stage1_firstRampAcc*t1*t1   +  0.5*stage1_secondRampAcc*t2*t2  +  stage1_firstRampVel*t2))/stage1_targetVel ;

    t6 = (stage2_dist - (stage1_targetVel*t4*t4 + 0.5*stage2_firstRampAcc*t4*t4 + stage2_firstRampVel*t5 + 0.5*stage2_secondRampAcc*t5*t5 + stage2_targetVel*t7 - 0.5*stage2_firstRampDec*t7*t7 + stage2_firstRampVel*t8 - stage2_secondRampDec*t8*t8))/stage2_targetVel;

    return t1 + t2 + t3 + t4 + t5 + t6 + t7 + t8;
}




int main (void) {
    double stage1_dist              = 3;
    double stage1_firstRampAcc      = 11.6;
    double stage1_firstRampVel      = 0.75;
    double stage1_secondRampAcc     = 5.8;
    double stage1_targetVel         = 1.5;
    
    double stage2_dist              = 5;
    double stage2_firstRampAcc      = 20;
    double stage2_firstRampVel      = 3.5;
    double stage2_secondRampAcc     = 10;
    double stage2_targetVel         = 7;
    double stage2_firstRampDec      = 10;
    double stage2_secondRampDec     = 20; 

    double t = get_time(stage1_dist, stage1_firstRampAcc, stage1_firstRampVel, stage1_secondRampAcc, stage1_targetVel, stage2_dist, stage2_firstRampAcc, stage2_firstRampVel, stage2_secondRampAcc, stage2_targetVel, stage2_firstRampDec, stage2_secondRampDec);

    cout << "the time taken is: " << t << "s\n";
}