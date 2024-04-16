#include"stdio.h"
int len(char* s)
{
	if (*s != '\0')
		return 1 + len(s + 1);
	else
		return 0;
}
int main()
{
	char arr[7] = {"sgfdhg"};
	int i = len(arr);
	printf("%d ", i);
	return 0;
}