// Q85: Reverse a string.

#include <stdio.h>

int main() {
    char ch[100];
    int i,len;

    printf("Enter a string : ");
    scanf("%s", &ch);

    for (i = 0; ch[i] != '\0'; i++) {
        len++;
    }
    for (i = len-1; i >= 0; i--) {
        printf("%c" , ch[i]);
    }
    return 0;
}