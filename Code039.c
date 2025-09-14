// Write a program to find the product of odd digits of a number :
#include <stdio.h>

int main() {
    int num,remainder,product = 1,isodd;

    printf("Enter your number : ");
    scanf("%d" , &num);

    while (num != 0) {
        remainder = num%10;
        num /= 10; 
        if (remainder%2 != 0) 
            product *= remainder;
            isodd = 0; 
    }
    if (isodd) 
        printf("%d" , product);
    else 
        printf("No odd numbers detected !!");
    return 0;
}