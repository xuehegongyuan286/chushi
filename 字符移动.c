#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
int main()
{
    char ar1[] = { "Hello world!" };
    char ar2[] = { "************" };
    int le = 0;
    int ri = strlen(ar2) - 1;
    while (le <= ri)
    {
    ar2[le] = ar1[le];
    ar2[ri] = ar1[ri];
   
    printf("%s\n", ar2);
    Sleep(1000);
    system("cls");
    le++;
    ri--;
    }
    printf("%s", ar1);
    return 0;
}