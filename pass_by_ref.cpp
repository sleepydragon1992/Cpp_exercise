#include <iostream>
using namespace std;

int & squareRef(int &);
int * squarePtr(int *);

int main() {
    int number1 = 8;
    cout << "In main() &number1: " << &number1 << endl;
    int & result = squareRef(number1);
    cout << "in main() &result: " << &result << endl;
    cout << result << endl;
    cout << number1 << endl;

    int number2 = 9;
    cout << "In main() &number2: " << &number2 << endl;
    int * pResult = squarePtr(&number2);
    cout << "In main() pResult: " << pResult << endl;
    cout << *pResult << endl;
    cout << number2 << endl;
}


int & squareRef(int & rNumber) {
   cout <<  "In squareRef(): " << &rNumber << endl;  // 0x22ff14
   rNumber *= rNumber;
   return rNumber;
}
 
int * squarePtr(int * pNumber) {
   cout <<  "In squarePtr(): " << pNumber << endl;  // 0x22ff10
   *pNumber *= *pNumber;
   return pNumber;
}