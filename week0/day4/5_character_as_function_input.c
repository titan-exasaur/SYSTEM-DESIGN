#include <stdio.h>

void printstr(char* c){//taking address of string
    while (c != '\0'){// as long as c is not null character, c is c[0] at first
        printf("%c", *c);
        c++;// incrementing c        
    }
}

int main(){
    char c[20] = "hello";
    printstr(c);
}