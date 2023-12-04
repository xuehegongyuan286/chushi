#include<stdio.h>
int  ADD(int x)
{
    return x + 1;
}
int main()
{

	long num = 0;
	
	printf("%d ", ADD(num));
	while(num <= 10)
	{
		num = ADD(num);
		printf("%d ", ADD(num));
	}
	return 0;
}