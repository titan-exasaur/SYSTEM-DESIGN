#include <stdio.h>

int main(void) {
    int n, r;

    printf("Enter number n: ");
    scanf("%d", &n);

    printf("Enter number r: ");
    scanf("%d", &r);

    if (r > n || n < 0 || r < 0) {
        printf("Invalid input\n");
        return 0;
    }

    int nfact = 1;
    int rfact = 1;
    int nrfact = 1;

    for (int i = 2; i <= n; i++) {
        nfact *= i;
    }

    for (int j = 2; j <= r; j++) {
        rfact *= j;
    }

    for (int k = 2; k <= n - r; k++) {
        nrfact *= k;
    }

    int ncr = nfact / (rfact * nrfact);
    printf("nCr: %d\n", ncr);

    int npr = nfact / nrfact;
    printf("nPr: %d\n", npr);

    return 0;
}
