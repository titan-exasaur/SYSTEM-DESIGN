#include <stdio.h>

int count_vowels(char* s){
    int count = 0;
    while(*s != '\0'){
        if (*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u' ||
        *s == 'A' || *s == 'E' || *s == 'I' || *s == 'O' || *s == 'U'){
            count++;
        }
        s++;
    }

    return count;
}

int main(){
    char s[] = {"ALEXANDRA DADDARIOU"};
    int vowel_count = count_vowels(s);
    printf("Number of vowels in %s is: %d", s, vowel_count);
}