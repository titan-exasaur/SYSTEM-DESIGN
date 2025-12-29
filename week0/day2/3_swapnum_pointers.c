#include <stdio.h>  

void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a = -22;
    int b = 9;

    swap(&a, &b);

    printf("a = %d\n", a);
    printf("b = %d\n", b);
}