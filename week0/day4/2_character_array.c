#include <stdio.h>

int main(){
    char C[4]; // creating an array of size 4
    C[0] = 'J';
    C[1] = 'O';
    C[2] = 'H';
    C[3] = 'N';
    printf("%s\n", C); // this will print "JOHN" + some garbage
    /*
    In C programming, strings are arrays of characters terminated 
    by a null character '\0'. If it's not terminated, it will print 
    some garbage value.
    */
    C[3] = '\0'; // terminating the string
    printf("%s\n", C); // this will print "JOHN"
}