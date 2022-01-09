#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	char ch = 0;
	int i = 0;
	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			ch = '!';
			i++;
			putchar(ch);
		}
		else if (ch == '!')
		{
			putchar('!');
			putchar('!');
		}
		else
		{
			putchar(ch);
		}
	}
	printf("\nswitchnum %d", i);
	return 0;
}