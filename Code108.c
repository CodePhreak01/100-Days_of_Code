// Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the 
// product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to 
// fit in a 32-bit integer.

#include <stdio.h>

int main() {
    int n,i,j;

    printf("Enter the array size : ");
    scanf("%d" , &n);

    int nums[n];
    printf("Enter the elements : ");
    for (i = 0; i < n; i++) {
        scanf("%d" , &nums[i]);
    }

    int answer[n];
    for (i = 0; i < n; i++) {
        int mul = 1;

        for (j = 0; j < n; j++) {
            if (j != i) {
                mul *= nums[j];
            }
        }
        answer[i] = mul;
    }
    for (i = 0; i < n; i++) {
        printf("%d " , answer[i]);
    }
    return 0;
}
