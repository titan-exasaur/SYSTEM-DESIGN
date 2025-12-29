#include <stdio.h>

int main(){
    int a = 25;
    int* x = &a;

    printf("%d\n", a); // value of a

    printf("%p\n", &a); // address of a
    printf("%p\n", x); // address of a through pointer

    printf("%p\n", &x); // address of x

    printf("%d\n", *x); // value of a through pointer
}