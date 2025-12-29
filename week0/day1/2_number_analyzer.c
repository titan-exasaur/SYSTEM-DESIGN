#include <stdio.h>


int main(){
    int number;
    int sum;
    int num;
    int revnum;

    printf("Enter number: ");
    scanf("%d", &number);

    // N is positive, negative, or zero
    if (number > 0){
        printf("%d is positive", number);
    } 
    else if(number < 0){
        printf("%d is negative", number);
    }
    else{
        printf("%d is zero", number);
    }

    printf("\n");

    // N is even or odd

    if (number%2==0){
        printf("%d is even", number);
    }
    else{
        printf("%d is odd", number);
    }

    printf("\n");

    // sum of digits of N
    sum = 0;
    num = number;

    while (num!=0){
        sum = sum + num%10;
        num = num/10;
    }
    printf("Sum of digits of %d is %d \n", number, sum);

    // Reversal of N
    revnum = 0;
    num = number;
    while (number>0){
        revnum = revnum*10 + number%10;
        number = number/10;
    }

    printf("Reversal of %d is %d", num, revnum);

}


/* 
#include <stdio.h>

int main() {
    int number, temp, sum = 0, rev = 0;

    printf("Enter number: ");
    scanf("%d", &number);

    // Positive / Negative / Zero
    if (number > 0)
        printf("Positive number\n");
    else if (number < 0)
        printf("Negative number\n");
    else
        printf("Zero\n");

    // Even / Odd
    if (number % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");

    // Prepare for digit operations
    temp = number;
    if (temp < 0)
        temp = -temp;

    // Sum of digits
    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }
    printf("Sum of digits = %d\n", sum);

    // Reverse
    temp = number < 0 ? -number : number;
    while (temp != 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    if (number < 0)
        rev = -rev;

    printf("Reverse = %d\n", rev);

    return 0;
}

*/