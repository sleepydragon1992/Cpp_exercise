#include <iostream>


using namespace std;

int main (void){
    int number = 99;
    int *pNumber;
    pNumber = &number;

    
    cout << pNumber << endl;
    cout << &number << endl;
    cout << *pNumber << endl;
    cout << number << endl;

    *pNumber = 99;
    cout << pNumber << endl;
    cout << &number << endl;
    cout << *pNumber << endl;
    cout <<  number << endl;


    cout << &pNumber << endl;
}