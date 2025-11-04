// Q83: Count vowels and consonants in a string.

#include <stdio.h>

int main() {
    char ch[100];
    int i = 0, vow = 0, cons = 0;

    printf("Enter the word : ");
    scanf("%s" , ch);

    while (ch[i] != '\0') {
        if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || 
            ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U') {
            vow++;
        }
        else {
            cons++;
        }
        i++;
    }
    printf("Vowels = %d \n", vow);
    printf("Consonants = %d", cons);
    return 0;
}