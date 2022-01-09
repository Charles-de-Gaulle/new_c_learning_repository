#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	char oldch = 0;
	char ch = 0;
	int i = 0;
	while ((ch = getchar()) != '#')
	{
		if (oldch == 'e' && ch == 'i')
			i++;
		oldch = ch;
	}
	printf("%d", i);
	return 0;
}