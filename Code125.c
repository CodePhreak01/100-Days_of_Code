// Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the
// end without overwriting existing content.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char ch[100];

    fp = fopen("sample.txt" , "a");
    
    if (fp == NULL) {
        printf("file does not exists !");
        exit(1);
    }
    printf("Enter the text : ");
    fgets(ch , sizeof(ch) , stdin);

    fputs(ch , fp);

    printf("File updated successfully with appended text.");
    
    fclose(fp);
    return 0;
}