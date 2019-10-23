#include <iostream>
#include <math.h>
#include <time.h>
#include <cmath>
#include <vector>
#include <sstream>

using namespace std;

class TSD305Math {
    private:
        float TC;
        float T_Ref;
        float K4_Comp;
        float K3_Comp;
        float K2_Comp;
        float K1_Comp;
        float K0_Comp;
        float K4_Obj;
        float K3_Obj;
        float K2_Obj;
        float K1_Obj;
        float K0_Obj;
        uint32_t ADC_Sensor = 6364157;
        uint32_t ADC_Object = 10738758;

        static constexpr float T_Sen_Min     =  -20;
        static constexpr float T_Sen_Max     =   85;
        static constexpr float T_Obj_Min     =    0;
        static constexpr float T_Obj_Max     =  100;
    public:
        TSD305Math(){
            TC      =  -0.0046;
            T_Ref   =   26.93;
            K4_Comp =   5.161 * pow(10,-4);
            K3_Comp =   5.639 * pow(10,-1);
            K2_Comp =   2.311 * pow(10,2);
            K1_Comp =   4.207 * pow(10,4);
            K0_Comp =  -1.312 * pow(10,6);
            K4_Obj  =  -1.029 * pow(10,-26);
            K3_Obj  =   1.787 * pow(10,-19);
            K2_Obj  =  -1.631 * pow(10,-12);
            K1_Obj  =   1.802 * pow(10,-5);
            K0_Obj  =   2.693 * pow(10,1);
        }

        double calculate_sensor_temp(){
            return (ADC_Sensor / pow(2,24)) * (T_Sen_Max - T_Sen_Min) + T_Sen_Min;
        }
        double calculate_TCF(){
                double T_Sensor = calculate_sensor_temp();
       return 1 + (T_Sensor - T_Ref) * TC;
        }
        double calculate_offset_TC(){
            double TCF = calculate_TCF();
            double T_Sensor = calculate_sensor_temp();
            double offset =   K4_Comp * pow(T_Sensor,4) + K3_Comp * pow(T_Sensor,3) 
                            + K2_Comp * pow(T_Sensor,2) + K1_Comp * pow(T_Sensor,1) + K0_Comp;
            return offset * TCF;
        }
        double calculate_obj_temp(){
            double Offset_TC = calculate_offset_TC();
        double TCF = calculate_TCF();
        double ADC_Comp = Offset_TC + ADC_Object - pow(2,23);
        double ADC_Comp_TC = ADC_Comp/TCF;
        return K4_Obj * pow(ADC_Comp_TC,4) + K3_Obj * pow(ADC_Comp_TC,3) + K2_Obj * pow(ADC_Comp_TC,2) + K1_Obj * pow(ADC_Comp_TC,1) + K0_Obj;
        }
};

int main (void){
    TSD305Math myMath;
    cout << myMath.calculate_sensor_temp() << endl;
    cout << myMath.calculate_TCF() << endl;
    cout << myMath.calculate_offset_TC() << endl;
    cout << myMath.calculate_obj_temp() << endl;
}