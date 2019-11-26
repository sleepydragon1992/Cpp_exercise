#include <string>
using namespace std;

class Employee {
    protected:
    string name;
    float payRate;

    public:
        Employee(string theName, float thepayRate);

        string getName() const;
        float getPayRate() const; 
        float pay(float hoursWorked) const;
};

class Manager : public Employee {
    protected:
        bool salaried;
    
    public:
        Manager(string theName, float thePayRate, bool isSalaried);
        bool getSalaried() const;
        float pay(float hoursWorked) const;
};