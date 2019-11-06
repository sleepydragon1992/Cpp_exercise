#include <iostream>
#include <stdexcept>
#include "exception_handling_example.h"

using namespace std;

int main() {
    PositiveInteger i1(8);
    cout << i1.getValue() << endl;
    //PositiveInteger i2(-8);

    try {
        cout << "begin try 1..." << endl;
        PositiveInteger i3(-8);
        cout << i3.getValue() << endl;
        cout << "end try 1..." << endl;
    } catch (invalid_argument & ex) {
        cout << "Exception: " << ex.what() << endl;
    }
    cout << "after try-catch 1..." << endl;

    try {
        cout << "begin try 2..." << endl;
        PositiveInteger i4(8);
        cout << i4.getValue() << endl;
        cout << "end try 2..." << endl;
    }
    catch (invalid_argument & ex) {
        cout << "Exception: " << ex.what() << endl;
    
    cout << "after try-catch 2..." << endl;
    }
}