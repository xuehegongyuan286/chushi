#include"stdio.h"
int main()
{
	int chi = 0, rab = 0;
	int he = 0, fo = 0;
	scanf_s("%d %d",&he,&fo);
	for (chi = 0; chi <= he; chi++)
	{
		for (rab = 0; rab <= fo; rab++)
		{
			if (rab + chi == he && 2 * chi + 4 * rab == fo)
			{
				printf("%d\t%d\n",chi,rab);
				break;
			}
		}
	}
	return 0;
}