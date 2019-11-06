/* Implementation for Date Class (Date.cpp) */
#include <iostream>
#include <stdexcept>
#include "Date.h"
using namespace std;
 
// Initialize static non-integer variable (must be done outside the class declaration)
const string Date::STR_MONTHS[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                                   "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
 
const int Date::DAYS_IN_MONTHS[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
 
const string Date::STR_DAYS[] = {"Sunday", "Monday", "Tuesday", "Wednesday",
                                 "Thursday", "Friday", "Saturday"};


bool Date::isLeapYear(int year) {
   return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

bool Date::isValidDate(int y, int m, int d) {
    if (y >= YEAR_MIN && y <= YEAR_MAX && m >= 1 && m <= 12) {
        int lastDayOfMonth = DAYS_IN_MONTHS[m-1];
        if (m == 2 && isLeapYear(y)) {
            lastDayOfMonth = 29;
        }
        return (d >= 1 && d <= lastDayOfMonth);
    }   
    else {
        return false;
   }
}

int Date::getDayOfWeek(int y, int m, int d){
    
}