// Write a program to calculate the area and circumference of a circle given its radius :

#include <stdio.h>

int main() {
    float r = 5, area , circ;

    area = 3.14 * r * r;
    circ = 2 * 3.14 * r;

    printf("Area of the circle is %.2f \n", area);
    printf("Circ of the circle is %.2f \n", circ);

    return 0;
}
