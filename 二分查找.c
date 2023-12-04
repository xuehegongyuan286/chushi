#include<stdio.h>
int main()
 {
	int n = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int le = 0;
	int rig = sz-1;
	scanf_s("%d",&n);
	while (le <= rig)
	{
		int mid = (rig - le) / 2+le;
		if (arr[mid] < n)
		{
			le = mid + 1;
	    }
		else if (arr[mid] > n)
		{
			rig = mid - 1;
		}
		else 
		{
			printf("该数字所对应的数组下标是：%d", mid);
			break;
		}
	}
	if (le > rig)
	{
		printf("输入错误，请重新输入\n");
	}
}
