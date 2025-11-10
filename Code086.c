// Q86: Check if a string is a palindrome.

#include <stdio.h>

int main() {
    char ch[100];
    int i,len = 0,ispal = 1;

    printf("Enter a string : ");
    scanf("%s" , &ch);

    for (i = 0; ch[i] != '\0'; i++) {
        len++;
    } 
    for (i = 0; i < len/2; i++) {
        if ( ch[i] != ch[len - i - 1] ) {
            ispal = 0;
            break;
        } 
    }
    if (ispal) 
        printf("%s is a palindrome string" , ch);
    else
        printf("%s is not a palindrome string" , ch);        
    return 0;
}