#include <stdio.h>

int main() {
    char c1[6] = "hello";
    char* c2; // declaring a pointer variable with char type
    c2 = c1; // assigning address of c1 to c2, i.e. c2 points to c1[0]

    printf("%c\n", c2[1]);

    // modifying the value of c2[1] will modify the value of c1[1]
    c2[1] = 'a';
    printf("%c\n", c1[1]);
    printf("%s\n", c1);
}