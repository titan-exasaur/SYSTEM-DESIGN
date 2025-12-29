#include <stdio.h>

int factorial(int n){
    int fact = 1;
    for (int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int combination(int n, int r){
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}

int main(void) {
    int n;
    printf("Enter number n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", combination(i, j));
        }
        printf("\n");
    }
    return 0;
}