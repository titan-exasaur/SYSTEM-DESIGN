#include <stdio.h>

int main(){
    int x = 5;
    int* p = &x; // pointer to x
    int** pp = &p; // pointer to p

    printf("%d\n", **pp); // dereferencing *(*pp) = *(value at &p) = *(&x) = value at x = 5
    printf("%d\n", *(*pp));// same i guess
}