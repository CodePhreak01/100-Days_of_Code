// Write a program to calculate library fine based on late days as follows:
// First 5 days late: ₹2/day
// Next 5 days late: ₹4/day
// Next 20 days days late: ₹6/day
// More than 30 days: Membership Cancelled

#include <stdio.h>

int main() {
    float days,fine;

    printf("Enter the no. of days : ");
    scanf("%f", &days);

    printf("Fine Due : ");
    
    if ( days >= 1 && days < 5 ) {
        fine = 2 * days;
        printf("You have to pay %.2f ", fine);
    }
    else if ( days >= 6 && days < 11 ) {
        fine = (4 * days) + (2 * days);
        printf("You have to pay %.2f ", fine);
    }
    else if ( days >= 11 && days < 31 ) {
        fine = (6 * days) + (4 * days) + (2 * days);
        printf("You have to pay %.2f ", fine);
    }
    else {
        printf("Your membership has been cancelled !!");
    }
    return 0;
}