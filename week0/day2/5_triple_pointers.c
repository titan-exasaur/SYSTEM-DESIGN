#include <stdio.h>

int main() {
    int a = 25;

    int* x = &a;
    int** y = &x;
    int*** z = &y;

    printf("%d\n", a); // value of a
    printf("%d\n", *x); // value of a through pointer
    printf("%d\n", **y); // value of a through double pointer
    printf("%d\n", ***z); // value of a through triple pointer
}