//#ifndef TIME_H
//#define TIME_H

class Time{
    private: // 3 privates data members
        int hour;
        int minute;
        int second;
    public:
        Time(int h = 0, int m = 0, int s = 0);
        int getHour();
        int getMinute();
        int getSecond();
        void setHour(int h);
        void setMinute(int m);
        void setSecond(int s);
        void setTime(int h, int m, int s);
        void print();
        void nextSecond();
};