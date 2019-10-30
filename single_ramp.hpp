
using namespace std;

class Single_Ramp{
    private:

        double dist;
        double firstRampAcc;
        double firstRampVel;
        double secondRampAcc;
        double targetVel;
        double firstRampDec;
        double secondRampDec;
        double layer_thickness;

        

    public:
        Single_Ramp();
        double get_time();
        void print_graph();
        void set_parameter(double dist, double firstRampAcc, double firstRampVel, double secondRampAcc, double targetVel, double firstRampDec, double secondRampDec, double layer_thickness);
};