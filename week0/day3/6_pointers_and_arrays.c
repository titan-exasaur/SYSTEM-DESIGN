// Pointers and Arrays
#include <stdio.h>

int main(){
    int A[] = {2, 4, 5, 8, 1}; // array of 5 integers
    printf("%p\n", A); // address of A --> "base address"
    printf("%p\n", &A[0]); // address of A[0]

    printf("%d\n", A[0]); // 2
    printf("%d\n", *A); // 4

}