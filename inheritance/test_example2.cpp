#include "example2.h"
#include <iostream>

using namespace std;

int main (void) {
    Employee Burke("John Burke", 25.0);
    cout << "Name: " << Burke.getName() << endl;
    cout << "Pay: " << Burke.pay(40.0) << endl;
    cout << "\n\n";
    Manager Kovacs("Jan Kovacs", 1200.0, true);

    cout << "Name: " << Kovacs.getName() << endl;
    cout << "Pay: " << Kovacs.pay(40.0) << endl;
    cout << "Salaried: " << Kovacs.getSalaried() << endl;
    cout << "\n\n";


    Employee *Joe;
    if(false){
        Joe = new Employee("Joe Average", 10.0);
    }
    else {
        Joe = new Manager("Joe Awesome", 50.0, true);
    }
    cout << "Name: " << Joe->getName() << endl;
    cout << "Pay rate: " << Joe->getPayRate() << endl;
    cout << "Pay: " << Joe->pay(40.0) << endl;
    cout << "\n\n";
    Manager Emma("Emma Watson",50.0, true);
    Manager &Hermione = Emma;
    cout << "Name: " << Hermione.getName() << endl;
    cout << "Pay rate: " << Hermione.getPayRate() << endl;
    cout << "Pay: "  << Hermione.pay(40) << endl;

    cout << "\n\n";

}