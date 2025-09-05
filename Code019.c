// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths :

#include <stdio.h>

int main() {
    int a,b,c;

    printf("Enter sides of the triangle respectively :");
    scanf("%d %d %d", &a,&b,&c);

    if (a == b && b == c) {
        printf("This is an equilateral triangle ");
    }
    else if (a == b || a == c || b == c) {
        printf("This is an isosceles triangle ");
    }
    else {
        printf("It is an equilateral triangle ");
    }
    return 0;
}
