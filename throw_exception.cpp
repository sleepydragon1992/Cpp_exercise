#include <iostream>

using namespace std;

double division(int a, int b){
    if (b == 0) {
        throw runtime_error("memory compromised") ;
    }
    return (a/b);
}

int main (void) {
    int i = 0;
    int j = 6;
    i = division(j,i);    
    cout << i << endl;
}