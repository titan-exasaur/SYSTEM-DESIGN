// pointer to pointer
#include <stdio.h>

int main(){
    int x = 5;
    int* p = &x;
    *p = 6;

    int** q = &p;
    int*** r = &q;

    printf("%d\n", *p); // 6
    printf("%d\n", **q); // 6
    printf("%d\n", ***r); // 6

    printf("%p\n", &p); // 2002
    printf("%p\n", &q); // 2002
    printf("%p\n", &r); // 2002

    ***r = 7; // changing value of x through triple pointer

    printf("%d\n", x); // 7

    **q = *p + 15; // changing value of x through double pointer

    printf("%d\n", x); // 22
}