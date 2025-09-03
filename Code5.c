// Write a program to convert temperature from Celsius to Fahrenheit :

#include <stdio.h>

int main() {
    float c, con;                 // Temperature in celsius ;

    printf("Enter the temperature in celsius :");
    scanf("%f",&c);

    con = ((9.0f/5.0f)*c + 32);

    printf("Temperature in Fahrenheit : %.2f",con);

    return 0;
}
