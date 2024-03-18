#include<stdio.h>

int main()
{
    int a,i=1;
    printf("Enter a no:");
    scanf("%d",&a);

    while (i<11)
    {
        printf("%d * %d = %d \n", a,i,a*i);
        i++;
    }
}
