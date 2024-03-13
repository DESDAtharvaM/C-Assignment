#include<stdio.h>
int main()
{

  int a,b,c;
  float avg;
  printf("\n Enter three numbers \n");
  printf("--------------------------------------\n");
  printf("\n Enter First number : ");
  scanf("%d", &a);
  printf("\n Enter Second number : ");
  scanf("%d", &b);
  printf("\n Enter Third number : ");
  scanf("%d", &c);
  printf("----------------------------------------\n");
  avg = a+b+c/3.0;
  printf("\n Average of three numbers : %f", avg);

  return 0;

}  
