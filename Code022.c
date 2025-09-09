// Write a program to find profit or loss percentage given cost price and selling price :

#include <stdio.h>

int main() {
    float cp,sp;

    printf("Enter the cost price :");
    scanf("%f", &cp);

    printf("Enter the selling price :");
    scanf("%f", &sp);

    if ( sp < cp ) {
        printf("You have %.2f loss", ((cp - sp)/cp)*100);
    }
    else if ( sp > cp ) {
        printf("You  have %.2f profit ", ((sp - cp)/sp)*100);
    }
    else {
        printf("You are gained 0 profit .");
    }
    return 0;
}