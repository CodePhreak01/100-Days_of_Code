// Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms :

#include <stdio.h>

float series( int n) {
    float formula = 0.0;
    for (int i = 1; i <= n; i++) {
        float num = 2 * i;
        float den = 4 * i - 1;
        formula += num/den; 
    }
    return formula;
}
int main() {
    int number;
    float sum;

    printf("Enter your number : ");
    scanf("%d" , &number);

    sum = series(number);

    printf("Sum of the series upto %d terms = %.2f" , number, sum);
    
    return 0;
}