#define _CRT_SECURE_NO_WARNINGS 1
//7.12
#include<stdio.h>
int main(void)
{
	char ch;
	ch = 0;
	int space = 0;
	int nextline = 0;
	int others = 1;
	while ((ch=getchar())!='#')
	{
		switch (ch)
		{
		case ' ':
			space++;
			break;
		case '\n':
			nextline++;
			break;
		default:
			others++;
			break;
		}
		/*if (ch == ' ')
			space++;
		else if (ch == '\n')
			nextline++;
		else
			others++;*/
	}
	printf("%d %d %d", space, nextline, others);
	return 0;
}/*Log:
   1.getchar不需要传参，返回读取字符
   2.逻辑判断时，特别是出现赋值语句时记得加括号表明用意，while ((ch=getchar())!='#')中，赋值括号提高=的优先级*/
