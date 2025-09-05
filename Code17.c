// Write a program to find the roots of a quadratic equation and categorize them :

#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c,i,j,D;
    
    printf("Enter the coefficients of quadratic equation respectively in from a,b,c :");
    scanf(" %f %f %f" , &a,&b,&c);
    
    D = sqrt(pow(b,2)-4*a*c);
    i = (-b + D)/(2*a);
    j = (-b - D)/(2*a);

    if ( D > 0 ) {
        printf("Roots are real : %.2f %.2f", i,j );
    }
    else if ( D == 0 ) {
        printf("Roots are real and equal : %.2f %.2f", i,j);
    }
    else {
        printf("Roots are imaginery : %.2f %.2f", i,j);
    }
    return 0;
}