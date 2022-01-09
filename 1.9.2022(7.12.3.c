#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int input = 0;
	int doublenum = 0;
	int singlenum = 0;
	int doublesum = 0;
	int singlesum = 0;
	do
	{
		scanf("%d", &input);
		if (input%2)
		{
			singlenum++;
			singlesum += input;
		}
		else
		{
			doublenum++;
			doublesum += input;
		}

	} while (input != 0);
	printf("doublenumber:%d double_averenge : %d\nsinglenumber : %d single_averenge : %d",
		doublenum, doublesum / doublenum, singlenum, singlesum / singlenum);
	return 0;
}