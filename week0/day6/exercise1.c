#include <stdio.h>

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);  // correct place
    int sum = 0;

    int* p = arr;

    while (n > 0){
        sum += *p;
        p++;
        n--;
    }

    printf("Sum = %d\n", sum);
    return 0;
}
