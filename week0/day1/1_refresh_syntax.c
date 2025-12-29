#include <stdio.h>

int a; // declaring first variable
int b; // declaring second variable

int main(){

    printf("Enter first number: "); // taking input of first number
    scanf("%d", &a);

    printf("Enter second number: "); // taking input of second number
    scanf("%d", &b);

    printf("a+b = %d\n", a + b); // print sum of 2 numbers
    printf("a-b = %d\n", a - b); // print difference of 2 numbers
    printf("a*b = %d\n", a * b); // print product of 2 numbers
    printf("a/b = %d\n", a / b); // print division of 2 numbers

}