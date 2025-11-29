// Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the 
// source file to the destination file using fgetc() and fputc().

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp1,*fp2;

    int ch;

    fp1 = fopen("info.txt" , "r");
    fp2 = fopen("sample.txt" , "w");

    if (fp1 == NULL) {
        printf("File does not exists !");
        exit(1);
    }
    while ((ch = fgetc(fp1)) != EOF ) {
        fputc(ch , fp2);
    }

    printf("File copied successfully to sample.txt");

    fclose(fp1);
    fclose(fp2);
    return 0;
}