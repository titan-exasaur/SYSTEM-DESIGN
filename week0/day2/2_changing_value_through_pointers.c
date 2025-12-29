#include <stdio.h>

int main(){
    int a = 25;
    int* x = &a;

    printf("value of a before: %d\n", a);

    *x = -89; // changing value of a through pointer

    printf("value of a after: %d\n", a);
}