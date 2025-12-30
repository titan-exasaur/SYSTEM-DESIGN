#include <stdio.h>

int sumofelements(int* A, int size){
    int i, sum = 0;
    for (i = 0; i < size; i++){
        sum += A[i];// A[i] will be same as *(A+i)
    }
    return sum;
}

int main (){
    int A[] = {1,2,3,4,5};
    int size = sizeof(A)/sizeof(A[0]);
    int total = sumofelements(A, size); // A and &A[0] are same
    printf("Sum of elements: %d", total);
}