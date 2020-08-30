#include<stdio.h>
int main()
{
	int x;
	scanf_s("%d", &x);
	for (int m = 0; m < x; m++)
	{
		for (int i = 0; i <= m; i++)
		{
			printf("* ");
		}
		for (int d = x * 2; d > m * 2 + 2; d -= 1)
		{
			printf("  ");
		}

		for (int r = 0; r <= m; r++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for (int m = 0; m < x - 1; m++)
	{
		for (int i = x - 1; i > m; i--)
		{
			printf("* ");
		}
		for (int d = 0; d < m * 2 + 2; d++)
		{
			printf("  ");
		}

		for (int r = x - 1; r > m; r--)
		{
			printf("* ");
		}
		printf("\n");
	}
}