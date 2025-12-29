#include <stdio.h>

void main(){
    int a = 10;
    int *p = &a;

    // pointer arithmetic
    printf("Address p is %p\n", p); // if p is 2002
    printf("Size of int is %d\n", sizeof(int)); // 4
    printf("Address p + 1 is %p\n", p + 1); // if p is 2002, p + 1 is 2006

    printf("Value at address p+1 is %d\n", *(p+1)); // some garbage value
}