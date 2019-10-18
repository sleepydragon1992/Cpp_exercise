#include "Time.hpp"
#include <iostream>
#include <iomanip>

using namespace std;


Time::Time(int h, int m, int s){
    hour = h;
    minute = m;
    second = s;
}

int Time::getHour(){
    return hour;
}

int Time::getMinute(){
    return minute;
}

int Time::getSecond(){
    return second;
}
void Time::setHour(int h){
    hour = h;
}
void Time::setMinute(int m){
    minute = m;
}
void Time::setSecond(int s){
    second = s;
}   
void Time::setTime(int h, int m, int s){
    hour = h;
    minute = m;
    second = s;
}
void Time::print(){
    cout << "the time is: "<< hour << ":" << minute << ":" << second << endl;
}
