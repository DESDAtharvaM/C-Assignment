
#include <stdio.h>
#include<math.h>
int main()
{
    int a, res = 0;
    rev(a,res);
    pali(a);
    arm(a);


  return 0;
}

int rev(int a,int res)
{
        printf("\nEnter  any no:");
    scanf("%d", &a);

    while (a > 0)
    {
        res = res + a % 10;
        a = a / 10;
    }
    printf("Sum=%d\n", res);

}

int pali(int a)
{

    int c, rn = 0, on, rem;
    printf("Enter  any no:");
    scanf("%d", &a);

    on = a;
    while (a != 0)
    {
        rem = a % 10;
      //  c = c+(rem *rem*rem);
        printf("%d \n",c);
        rn = rn * 10 + rem;
        a /= 10;
       // printf("rem=%d num=%d rn=%d\n", rem, a, rn);
    }

    printf("The revers no is:%d\n",rn);
   // c==a?printf("%d is a Armstrong number \n",a):printf("%d is not a Armstrong number \n",a);
    if (on == rn)
    {
        printf("%d is a palindrome.\n", on);
    }
    else
    {
        printf("%d is not a palindrome.\n", on);
    }


}

int arm(int a)
{
    int num, on, rem, dc = 0, res = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    on = num;

    while (on != 0) {
        on /= 10;
        dc++;
    }

    on = num;

    while (on != 0) {
        rem = on % 10;
        int temp = rem;

        for (int i = 1; i < dc; i++) {
            temp *= rem;
        }

        res += temp;
        on /= 10;
    }

    if (res == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
