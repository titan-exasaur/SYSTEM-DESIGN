#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int gcd(int a, int b) {
    int hcf = 1;   // initialize

    for (int i = 1; i <= min(a, b); i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }
    return hcf;   // ✅ REQUIRED
}

int main() {
    int a, b, hcf;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    hcf = gcd(a, b);
    printf("HCF of %d and %d is %d", a, b, hcf);

    return 0;
}
