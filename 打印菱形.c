#include"stdio.h"
int main()
{
	int x = 0;
	int y = 0;
	int n = 0;
	scanf_s("%d",&n);
	for (y = 1; y <= n; y++)
	{
		for (x = 1; x <= 2 * n - 1; x++)
		{
			if (x > n - y && x < n + y)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		
		}
		printf("\n");
	}
	for (y=1; y <= n; y++)
	{
		for (x=1; x <= 2 * n - 1; x++)
		{
			if (x >= y + 1 && x <= 2 * n - y - 1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}