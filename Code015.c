// Write a program to input a character and check whether it is an uppercase alintphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>

int main() {
    char ch;

    printf("Enter your character :");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an uppercase alphabet", ch);
    }
    else if (ch >= 'a' &&  ch <= 'z') {
        printf("%c is a lowercase alphabet", ch);
    }
    else if ( ch >= '0' && ch <= '9') {
        printf("%c is a digit", ch);
    }
    else {
        printf("%c is a special character !!", ch);
    }
    return 0;
}
