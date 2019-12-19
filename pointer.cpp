#include <iostream>


using namespace std;

int main (void){
    int a;
    long b;
    char ch;
    int* i;
    long* l;
    char* c;
    l = i+1;
    c = l+1;
    *i = a;
    *l = b;
    *c = ch;
    cout << i << endl;
    cout << l << endl;
    cout << c << endl;
}