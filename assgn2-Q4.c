#include<stdio.h>

int main()

{

   int num1, num2;
   printf("Enter two numbers : ");
   scanf("%d %d", &num1, &num2);

   //using if - else
   if(num1 > num2)
   {
       printf("Maximum using if-else : %d\n", num1);
   }
   else
   {
       printf("Minimum using if- else : %d\n", num2);
   }

   //using conditional operators

   int max = (num1 > num2) ? num1 : num2;
   printf(" Maximum using condition : %d\n", max);

   return 0;
}   
