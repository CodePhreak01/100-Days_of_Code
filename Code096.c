// Q96: Reverse each word in a sentence without changing the word order.

#include <stdio.h>

void reverse(char str[] , int st , int end) {
    for (int i = end; i >= st; i--)
        printf("%c" , str[i]);    
}

int main() {
    char ch[100];
    int i,begin=0;

    printf("Enter the string : ");
    fgets(ch , sizeof(ch) , stdin);

    for (i = 0; ch[i] != '\0'; i++) {
        if (ch[i] == ' ' || ch[i] == '\n') {
            reverse(ch, begin , i - 1);
            printf(" ");
            begin = i + 1;
        }
    }
    
    return 0;
}