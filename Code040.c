// Write a program to find the 1’s complement of a binary number and print it :

#include <stdio.h>

int main() {
    int i = 0;
    char binary[100];

    printf("Enter your binary number : ");
    scanf("%s" , &binary);

    while (binary[i] != '\0') {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        else {
            printf("Invalid binary digit !! \n");  
            return 1;
        }
        i++;
    }    
    printf("1's complement : %s \n" , binary);    
    return 0;
}