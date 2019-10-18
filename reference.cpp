#include <iostream> 

using namespace std;

void square (int);

int main (){
    int number = 8; 
    cout << "in main(): " << &number << endl;
    cout << number << endl;
    square(&number);
    cout << number << endl;
}

void square (int * pNumber){
    cout << "In square(): " << pNumber << endl;
    *pNumber 
}