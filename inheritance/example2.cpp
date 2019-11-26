#include "example2.h"

Employee::Employee(string theName, float thePayRate)
{
  name = theName;
  payRate = thePayRate;
}

string Employee::getName() const
{
  return name;
}

float Employee::getPayRate() const
{
  return payRate;
}

float Employee::pay(float hoursWorked) const
{
  return hoursWorked * payRate;
}



Manager::Manager (string theName, float thePayRate, bool isSalaried) : Employee( theName, thePayRate){
    salaried = isSalaried;
}

bool Manager::getSalaried() const{
    return salaried;
}
float Manager::pay(float hoursWorked) const {
    if (salaried){
        return payRate;
    }
    return Employee::pay(hoursWorked);
}