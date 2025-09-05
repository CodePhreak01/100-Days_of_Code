// Write a program to calculate simple and compound interest for given principal, rate, and time :

#include <stdio.h>
#include <math.h>

int main() {
    float principal,rate,Si,Ci,A;
    int time;

    printf("Enter the principal amount : ");
    scanf("%f", &principal);

    printf("Enter the rate : ");
    scanf("%f", &rate);

    printf("Enter the time : ");
    scanf("%d", &time);
    
    Si = (principal*rate*time)/100;

    A = principal * pow((1 + (rate/100)),time);
    
    Ci = A - principal;
    
    printf("Simple interest : %.2f \n", Si);
    printf("Compound interest : %.2f \n", Ci);

    return 0;
}
