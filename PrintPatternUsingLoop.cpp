#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// #include <iostream>
// using namespace std;

int min (int a, int b, int c, int d){
    int min = a;
    if (min > b){
        min = b;
    }
    if (min > c){
        min = c;
    }
    if (min > d){
        min = d;
    }
    return min;
}
int main() 
{

    int n = 3;
    //scanf("%d", &n);
  	// Complete the code to print the pattern.21`3
    int i;
    for (i = 1; i <=(2*n-1); i ++){
        printf("\n");
        for(int j = 1; j<=(2*n-1); j++){
            //printf("%d ",n);
            int a = min(i,j,2*n-i,2*n-j);
            printf("%d ", n-a+1);
        }
    }

    return 0;
}