#include <stdio.h>
#include <string.h>
int main()
{
	int i = 3;
	for (i = 1; i <= 200; i++)
	{
		int flag = 1;
		int j = 0;
		for (j = 2; j <= i - 1; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}

		}
		if (flag == 1)
		{
			printf("%d ",i);
     	}
	}
	return 0;
}