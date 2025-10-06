 // Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main() {
    int length = 5, breadth = 6, area , perimeter;
    
    area = length * breadth;
    perimeter  = 2 * (length + breadth);

    printf("Area of the rectangle is %d \n", area);
    printf("Perimeter of the rectangle is %d \n", perimeter);

    return 0;
}

