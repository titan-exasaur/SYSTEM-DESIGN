#include <stdio.h>

int main(){
    int a = 1025;
    int* p;
    p = &a;

    printf("size of the integer is %d bytes\n", sizeof(int));
    printf("Address = %p, value = %d\n", p, *p);
    
    // void pointer aka generic pointer
    void* p0;
    p0 = p;
    // printf("Address = %p, value = %d\n", p0, *p0); // error cuz p0 is void pointer
    return 0;

}