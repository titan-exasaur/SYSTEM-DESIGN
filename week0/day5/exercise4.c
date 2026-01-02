// printing strlen using pointers only

#include <stdio.h>

int my_strlen(char* s){
    int len = 0;
    while (*s != '\0'){
        len++;
        s++;
    }
    return len;
};

int main(){
    char a[5] = {'J', 'O', 'H', 'N', '\0'};
    int length = my_strlen(a);
    printf("Size of a is: %d\n", sizeof(a));
    printf("Length of a is: %d", length); 
}