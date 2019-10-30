#include <iostream>
#include <math.h>
using namespace std;
​
​
​
​
//generic physics function
​
double linear_acc_dist (double vel, double acc, double t){      
    //this function calculate the distance covered by a linear acceleration motion    
    return t*vel + 0.5*acc*t*t;
}
//**************************************************************************************
/*   Single Ramp
    distance    = dist
    a1          = firstRampAcc
    v_mid       = firstRampVel
    a2          = secondRampAcc
    v_max       = targetVel
    d1          = firstRampDec
    d2          = secondRampDec
  */
 //**************************************************************************************
​
class Ramp {
    public:
        double distance;
        double a1;
        double v_mid;
        double a2;
        double v_max;
        double a3;
        double a4;
        double d1;
        double d2;
		
		
		
    public:
    double get_time();
    void get_graph();
​
};
​
double Ramp::get_time(){
    d1 = -a3;
    d2 = -a4;
    double t1 =  v_mid/a1;                   // time taken to complete the first ramp up
    double t2 = (v_max-v_mid)/a2;           // time taken to complete the second ramp up
    double t4 = (v_max-v_mid)/d1;           // time taken to complete the first ramp down
    double t5 =  v_mid /d2;           // time taken to complete the second ramp down        WRONG !!!!!! 
    double d_travelled = (0.5*a1*t1*t1) + v_mid*t2 + (0.5*a2*t2*t2) 
    + v_max*t4 - (0.5*d1*t4*t4) + v_mid*t5 - (0.5*d2*t5*t5);         // calculate the distance travelled in these region
    double t3 = (distance - d_travelled)/v_max;
​
    
    return t1+t2+t3+t4+t5;                  // total time for all the ramp to happen 
}
​
​
//**************************************************************************************
/*   double_Ramp
    
    first 
    a1          = firstRampAcc
    v1          = firstRampVel
    a2          = secondRampAcc
    v2          = targetVel
    d1          = dist
​
    second
    a3          = firstRampAcc
    v3          = firstRampVel
    a4          = secondRampAcc
    v4          = targetVel
    a5          = firstRampDec
    a6          = secondRampDec
  */
 //**************************************************************************************
​
class double_Ramp {
    public: 
        double d1;
        double d2;
        double a1;
        double v1;
        double a2;
        double v2;
        double a3;
        double v3;
        double a4;
        double v4;
        double a5;
        double v5;
        double a6;
​
    public:
    double get_time();
}
​
double double_Ramp::get_time(){
    v5 = v3;
​
    double t1 = v1/a1;
    double t2 = (v2-v1)/a2;
    double t3 = (d1 - linear_acc_dist(0,a1,t1)-linear_acc_dist(v1,a2,t2))/v2;
    double t4 = (v3-v2)/a3;
    double t5 = (v4-v3)/a4;
    double t7 = (v5-v4)/a5;
    double t8 = (0-v5)/a6;   
    double t6 = (d2 - linear_acc_dist(v2,a3,t4) - linear_acc_dist(v3,a4,t5)
     - linear_acc_dist(v4,a5,t7) - linear_acc_dist(v5,a6,t8))/v4;
​
    if ( t6<0 or t3<0 ){
        return 0;
    }
    else{
    return t1 + t2 + t3 + t4 + t5 + t6 + t7 + t8; 
    }
}
​
​
​
​
​
​
​
int main () {
​
//**************************************************************************************
/*   Single Ramp
    distance    = dist
    a1          = firstRampAcc
    v1          = firstRampVel
    a2          = secondRampAcc
    v2          = targetVel
    d1          = firstRampDec
    d2          = secondRampDec
  */
 //**************************************************************************************
    Ramp test_ramp ;
​
    test_ramp.distance  =  7.9;      //(dist - layer thickness)
    test_ramp.a1        =  20;       //firstRampAcc
    test_ramp.v_mid     =  4;        //firstRampVel
    test_ramp.a2        =  10;       //secondRampAcc
    test_ramp.v_max     =  9;        //targetVel
    test_ramp.a3        = -10;       //firstRampDec
    test_ramp.a4        = -20;       //secondRampDec
​
    cout << "Total time taken for single ramp is: " << test_ramp.get_time() << "s\n";
    
​
​
​
//**************************************************************************************
/*   double_Ramp
    
    first 
    a1          = firstRampAcc
    v1          = firstRampVel
    a2          = secondRampAcc
    v2          = targetVel
    d1          = dist
​
    second
    d2          = dist
    a3          = firstRampAcc
    v3          = firstRampVel
    a4          = secondRampAcc
    v4          = targetVel
    a5          = firstRampDec
    a6          = secondRampDec
  */
 //**************************************************************************************
    double_Ramp test_double_ramp ; 
​
    test_double_ramp.d1 =  3; 
    test_double_ramp.d2 =  5;
    test_double_ramp.a1 =  0.75;
    test_double_ramp.a2 =  5.8;
    test_double_ramp.a3 =  20;
    test_double_ramp.a4 =  10;
    test_double_ramp.a5 = -10;
    test_double_ramp.a6 = -20;
    test_double_ramp.v1 =  0.75;
    test_double_ramp.v2 =  1.5;
    test_double_ramp.v3 =  3.5;
    test_double_ramp.v4 =  7;
    test_double_ramp.v5 =  3.5;
    
    test_double_ramp.get_time();
​
    cout<<"Total time taken for double Ramp is: " << test_double_ramp.get_time() << "s \n";  
   
    
​
    
}