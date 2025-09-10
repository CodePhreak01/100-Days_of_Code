// Write a program to calculate electricity bill based on units consumed with these rates :
// First 100 units at ₹5/unit
// Next 100 units at ₹7/unit
// Next 100 units at ₹10/unit
// Above at ₹12/unit

#include <stdio.h>

int main() {
    float pay;
    int units;

    printf("Enter the units :");
    scanf("%d" , &units);

    printf("You have to pay Rs ");

    if ( units >= 1 && units < 101) {
        pay = units * 5;
    }
    else if ( units >= 101 && units < 201 ) {
        pay = (100 * 5) + (units - 100) * 7;
    }
    else if ( units >= 201 && units < 301 ) {
        pay = (100 * 5) + (100 * 7) + (units - 200) * 10;
    }
    else {
        pay = (100 * 5) + (100 * 7) + (100 * 10) + (units - 300) * 12;
   }
   printf("%.2f" , pay);
    
   return 0;
} 