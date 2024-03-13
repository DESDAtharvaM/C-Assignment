#include<stdio.h>
int main()
{
   float a, b, celsius, fahrenheit;
   int x;
   printf("Press 1 to convert Fahrenheit to Celsius \n");
   printf("Press 2 to convert celsius to Fahrenheit \n");
   printf("\nEnter your choice : ");
   scanf("%d", &x);
   switch(x)
   {
   case 1 :
          printf("\n Enter the Temperature in Fahrenheit : ");
		  scanf("%f", &a);
		  celsius = 5 * (a - 32 ) / 9;
		  printf("\n\n Celsius Temperature is : %f", celsius);
		  break;
		 
   case 2 :
          printf("\n Enter the Temperature in Celsius : ");
		  scanf("%f", &b);
		  fahrenheit = ((9 * b) / 5) + 32;
		  printf("\n\n Fahrenheit Temperature is : %f", fahrenheit);
		  break;
  default:
     printf("\n\n Wrong Choice...........Try again!! \n");
  }
  return 0;

}  
