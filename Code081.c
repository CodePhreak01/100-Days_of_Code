// Q81: Count characters in a string without using built-in length functions.

#include <stdio.h>

int main() {
    char ch[100];
    int count = 0;

    printf("Enter the word : ");
    scanf("%s" , &ch);
    while (ch[count] != '\0') {
        count ++;
    }

    printf("Number of characters = %d", count);
    return 0;
}