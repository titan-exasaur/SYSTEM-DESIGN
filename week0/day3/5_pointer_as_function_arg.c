// Pointer as Function argument
#include <stdio.h>

void increment(int *p){
    *p = *p + 1;
}

int main(){
    int a;
    a = 10;
    increment(&a); // passing address of 'a' as argument to increment function
    printf("a = %d\n", a);
}

/*
Pointers are useful when certain operations demand 
creating copies of complex data structures,
so instead of copying the data,
we can just copy the address.

This is called 'call by reference'
*/