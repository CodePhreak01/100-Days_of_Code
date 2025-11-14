// Q89: Count frequency of a given character in a string.

#include <stdio.h>

int main() {
    char ch[100],k;
    int freq = 0;

    printf("Enter the string : ");
    fgets(ch , sizeof(ch), stdin);

    printf("Enter the character : ");
    scanf("%c" , &k);

    for (int i = 0; ch[i] != '\0'; i++) {
        if (ch[i] == k)
            freq++;
    }
    printf("No. of times %c appears : %d" , k , freq);
    return 0;
}