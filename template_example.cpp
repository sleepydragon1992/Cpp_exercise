#include <iostream>
#include <stdio.h>

using namespace std;

template <typename T, typename U>
T Max_value(T x, U y){
    if (x>=y)   return x;
    else        return y;
}

int main() {

    cout << Max_value(3,7) << endl;
    cout << Max_value(3.0, 7.0) << endl;
    cout << Max_value('g', 'e') << endl;
    cout << Max_value(3.0, 'a') << endl;
    char a = 'b';
    int ia = (int)a;
    cout << ia << endl;
    return 0;
}