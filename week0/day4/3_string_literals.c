#include <stdio.h>
#include <string.h>

int main() {
    char c[20] = "JOHN"; // instead of C[0] = "J", ..., we can use this
    int len = strlen(c); // length of string --> 4, even though array size is 20
    printf("Length = %d\n", len);

    char c1[] = "JOHN"; // will create a string of size 5 (including null character '\0')
    printf("Length = %d\n", sizeof(c1));

    // length is not fixed, but size is fixed
    // \0 is not counted in length
    // \0 is counted in size


    /*
    Ways if initisalizing a string:
    char c[] = "JOHN"; -- method 1
    char c[5] = {'J', 'O', 'H', 'N', '\0'}; -- method 2

    char c[5];
    c[0] = 'J';
    c[1] = 'O';
    c[2] = 'H';
    c[3] = 'N';
    c[4] = '\0'; -- method 3


    */
}