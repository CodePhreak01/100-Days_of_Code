// Write a program to display the day of the week based on a number (1–7) using switch-case :

#include <stdio.h>

int main() {
    int num;

    printf("Enter your day number :");
    scanf("%d", &num);

    switch(num) {
        case 1 :
        printf("Monday");
        break;
        case 2 : 
        printf("Tuesday");
        break;
        case 3 :
        printf("Wednesday");
        break;
        case 4 :
        printf("Thursday");
        break;
        case 5 :
        printf("Friday");
        break;
        case 6 :
        printf("Saturday");
        break;
        case 7 :
        printf("Sunday");
    
        default :
        printf("ERROR ! Please enter number from 1 to 7 only !!");
    }
    
    return 0;
}