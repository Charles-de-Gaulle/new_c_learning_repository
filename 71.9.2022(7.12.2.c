#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	char ch = 0;
	int i = 0;
	while ((ch = getchar()) != '#')
	{
		printf("%c-%d", ch, ch);
		i++;
		if (!(i % 8))
			printf("\n");
	}
	return 0;
}
/*Log
1.getchar��������һ��Ҫ��С���ţ������ʧ��*/