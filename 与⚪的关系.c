#include"stdio.h"
#include"math.h"
int main()
{
	int r = 1;
	float x = 0.0f;
	float y = 0.0f;
	float d = sqrt((x-2)*(x-2)+(y-2)*(y-2));
	scanf_s("%f %f",&x,&y);
	if (d < r)
	{
		printf("点M在圆内");
	}
	else if (d == r)
	{
		printf("点M在圆上");
	}
	else
	{
		printf("点M在圆外");
	}
	return 0;
}