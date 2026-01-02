// printing contents of an array

#include <stdio.h>

void print(int* arr, int n){
    while (n > 0){
        printf("%d\n", *arr);
        arr++;
        n--;
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    print(arr, 5);
}