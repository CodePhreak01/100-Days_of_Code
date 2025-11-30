// Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits 
// and special characters.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int vowels=0,consonants=0;
    int ch;

    fp = fopen("output.txt" , "r");

    if (fp == NULL) {
        printf("file does not exist !");
        exit(1);
    }

    while ((ch = fgetc(fp)) != EOF ) {
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }
        
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
        else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        }
    }
    printf("Vowels : %d \n" , vowels);
    printf("Consonants : %d" , consonants);

    fclose(fp);
    return 0;
}