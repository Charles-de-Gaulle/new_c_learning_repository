#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	char ch = 0;
	int i = 0;
	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
		case '.':
			ch = '!';
			i++;
			putchar(ch);
			break;
		case '!':
			i++;
			putchar('!');
			putchar('!');
			break;
		default:
			putchar(ch);
			break;
		}
	}
	printf("\nswitchnum %d", i);
	return 0;
}