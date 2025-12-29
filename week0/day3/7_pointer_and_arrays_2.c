#include <stdio.h>

int main() {
    int A[] = {2, 4, 5, 8, 1}; // array of 5 integers
    
    for (int i = 0; i < 5; i++) {
        printf("Address = %p\n", &A[i]);
        printf("Address = %p\n", A + i);
        printf("Value = %d\n", A[i]);
        printf("Value = %d\n", *(A + i));
    }   
}

/*
"A" will be base address of array "A" which is same as &A[0]
A+i will be same as &A[i]
*(A+i) will be same as A[i]
*/