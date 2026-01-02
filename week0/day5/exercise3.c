// Reversing an array

#include <stdio.h>

void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void reverse(int* arr, int n){
    int* start = arr;
    int* end = arr+(n-1);
    while (start < end){
        swap(start, end);
        start++;
        end--;
    };
}


int main(){
    int arr[5] = {1,2,3,4,5};
    reverse(arr, 5);
    for (int i=0; i<5; i++){
        printf("%d ", *(arr+i));
    };
}