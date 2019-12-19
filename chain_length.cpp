#include <iostream>
#include <math.h>

using namespace std;

int get_chain_length(int n){
    int k = 1;
    while(n != 1){
        if (n%2 == 0) {
            n = n/2;
        }
        else {
            n = 3*n + 1;
        }
    k++;
    }
    return k;
}

int get_max(int first, int last){
    int max = 0;
    for (int p = first; p <= last; p++){
         if (max < get_chain_length(p)){
             max = get_chain_length(p);
         }
    }
    return max;
}

int main (void) {
    int i = 201;
    int j = 210;
    cout << get_max(i, j) << endl;
}