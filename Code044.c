// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms :

#include <stdio.h>

int main() {
    int num;
    double n,d,sum = 0;

    printf("Enter the term : ");
    scanf("%d" , &num);

    for (int i = 1; i <= num; i++) {
        if (i == 1) {
           sum += 1.00;
        }     
        else {
            n = (2 * i) - 1;
            d = 2 * i;
            sum += n / d;    
        }
    }
    printf("Sum of the series upto %d terms = %.2f", num, sum);
    return 0;
}