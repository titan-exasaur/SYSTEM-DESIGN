#include <stdio.h>

int main(){
    int a = 25;

    int* x = &a;
    // int* y = &x; 
    /* 
    this is not a safe way to do this 
    because if x is changed the value of y will be changed
    */

    int** y = &x; // this is the correct way

    printf("%d\n", *x);
    printf("%d\n", **y);
    printf("%p\n", y);
    printf("%p\n", *y);

}