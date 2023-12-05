#include<stdio.h>
int search(int arr[], int x, int y)
{
	int le = 0;
	int ri = y - 1;
	while (le <= ri)
	{
		int mid = (ri - le) / 2 + le;
		if (arr[mid] < x)
		{
			le = mid + 1;
		}
		else if (arr[mid] > x)
		{
			ri = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int ar[10] = {1,2,3,4,5,6,7,8,9,0};
	int sz = sizeof(ar) / sizeof(ar[0]);
	int n = 0;
	scanf_s("%d",&n);
	int ret = search(ar, n, sz);
	if (ret == -1)
	{
		printf("输入数字超出范围");
	}
	else
	{
		printf("该数字下标为：%d",ret);
	}
}