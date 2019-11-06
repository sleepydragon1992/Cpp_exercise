using namespace std;

class Double_Ramp{
    private:

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

        

    public:
        Double_Ramp();
        double get_time();
        void print_graph();
        void set_parameter_first(double dist, double firstRampAcc, double firstRampVel, double secondRampAcc, double targetVel);
        void set_parameter_second(double dist, double firstRampAcc, double firstRampVel, double secondRampAcc, double targetVel, double firstRampDec, double secondRampDec, double layer_thickness);
};