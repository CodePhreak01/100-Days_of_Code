// Write a program to check if a number is a palindrome :

#include <stdio.h>
 
int main() {
   int num, i , reverse = 0, original , remainder;

   printf("Enter your number : ");
   scanf("%d" , &num);

   original = num;

   while (num!= 0) {
      remainder = num % 10;
      reverse = reverse * 10 + remainder;
      num = num / 10;
   }
   if (original == reverse) {
      printf("%d is a palindrome !!", original);
   }
   else 
      printf("%d is not a palindrome !!", original);
   return 0;
}