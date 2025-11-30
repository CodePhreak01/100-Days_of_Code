// Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes
// the result to output.txt.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp1,*fp2;

    int ch;

    fp1 = fopen("input.txt" , "r");
    fp2 = fopen("output.txt" , "w");

    if (fp1 == NULL) {
        printf("File does not exists !");
        exit(1);
    }
    printf("Output File Content : \n");

    while ((ch = fgetc(fp1)) != EOF ) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;
        }
        fputc(ch , fp2);
        putchar(ch);
    }

    fclose(fp1);
    fclose(fp2);
    return 0;
}