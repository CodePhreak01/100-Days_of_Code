// Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find 
// the first negative integer in each subarray of size k moving from left to right. If no negative 
// exists in a window, print "0" for that window. Print the results separated by spaces as output.

#include <stdio.h>

int main() {
    int n,k;
    int i,j;

    printf("Enter the size of array : ");
    scanf("%d" , &n);

    int arr[n];
    printf("Enter the elements : ");
    for (i = 0; i < n; i++) {
        scanf("%d" , &arr[i]);
    }

    printf("Enter the value of k : ");
    scanf("%d" , &k);

    for (i = 0; i < n-k+1; i++) {
        int neg = 0;
        for (j = i; j < i+k; j++) {
            if (arr[j] < 0) {
                neg = arr[j];
            }    
        }
        printf("%d " , neg);
    }

    return 0;
}