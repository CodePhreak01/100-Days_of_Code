// Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of 
// any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are
//  negative, print the largest (least negative) element.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int ctotal = 0;
    int k = nums[0];

    for (int i = 0; i < n; i++) {
        ctotal += nums[i];
        if (ctotal > k) k = ctotal;
        if (ctotal < 0) ctotal = 0;
    }

    printf("%d", k);
    return 0;
}
