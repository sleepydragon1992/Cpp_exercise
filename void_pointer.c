#include <stdio.h>

int main(){
    void *pointer_array[10];
    int index = 0;

    void append_pointer(void *p){
        pointer_array[index] = p;
        index ++;
    }

    void *get_pointer(int i){
        return pointer_array[i];
    }
}