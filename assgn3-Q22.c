#include <stdio.h>

int main()
{

	char ch = '*';

	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("  %c ", ch);
		}
		printf("\n");
	}

	printf("--------------------------------------------------\n");

	char ch1 = '*';

	for (int i = 5; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("  %c ", ch1);
		}
		printf("\n");
	}

	printf("--------------------------------------------------\n");

	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%-4d", j);
		}
		printf("\n");
	}

	printf("--------------------------------------------------\n");

	for (int i = 5; i >= 1; i--)
	{
		for (int j = 5; j >= i; j--)
		{
			printf("%-4d", j);
		}
		printf("\n");
	}

	printf("--------------------------------------------------\n");

    return 0;

}	
