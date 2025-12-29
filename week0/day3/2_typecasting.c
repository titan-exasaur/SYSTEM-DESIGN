#include <stdio.h>

void main() {
    int a = 1028;
    int* p = &a;
    printf("Size of int is %d\n", sizeof(int)); // 4
    printf("Address = %p, value = %d\n", (void*)p, *p); // if p is 2002

    char* p0;
    p0 = (char*)p; // type casting from int to char pointer
    printf("Size of char is %d\n", sizeof(char)); // 1
    printf("Address = %p, value = %d\n", (void*)p0, *p0);

}

