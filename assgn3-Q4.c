#include<stdio.h>
int main()
{
    int c=1,a,b,i=1;
    printf("Enter any no:");
    scanf("%d",&a);

    while(i<=a)
    {
        c=c*i;
        i++;
    }
    printf("%d",c);
}
