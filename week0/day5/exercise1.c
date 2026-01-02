// Swapping two values

#include <stdio.h>

void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a = 3;
    int b = 5;
    int* x = &a;
    int* y = &b;

    swap(x, y);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}