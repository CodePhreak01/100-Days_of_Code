// Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a 
// sequence of non-space characters separated by spaces or newlines.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char ch;
    int word = 0, character = 0, line = 0;
    int inWord = 0; 
    
    fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        character++;  

        if (ch == '\n') {
            line++;  
        }

        if (ch == ' ' || ch == '\n' || ch == '\t') {
            inWord = 0;  
        } else if (inWord == 0) {
            inWord = 1;  
            word++;
        }
    }

    fclose(fp);

    printf("Characters: %d\nWords: %d\nLines: %d\n", character, word, line);

    return 0;
}
