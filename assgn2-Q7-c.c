#include<stdio.h>

int main() 

{
   int year;
   printf("Enter the year : ");
   scanf("%d", &year);

   (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? printf("Leap year\n") : printf("Not a Leap Year\n");
   return 0;
}   

