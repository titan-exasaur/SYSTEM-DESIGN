#include <stdio.h>

int main() {
    int a = 513;
    int* p = &a;

    unsigned char* c = (unsigned char*)p;

    printf("%d\n", *c);
    printf("%d\n", *(c + 1));
    printf("%d\n", *(c + 2));
    printf("%d\n", *(c + 3));

    return 0;
}
