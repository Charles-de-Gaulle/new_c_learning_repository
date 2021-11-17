#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void main()
//{
//    int a = 0;
//    int b = 0;
//    if(a>=0&&a<=10000&&b>=0&&b<=9)
//    {
//        scanf("%d %d", &a, &b);
//        int c = (int)((a*10 + b) / 19);
//        printf("%d", c);
//    }
//}
int main()
{
	int a, b, c, d,e,f;
	e = 0;
	f = 0;
	scanf("%d %d %d %d", &a ,& b, & c, & d);
	if (d<b)
	{
		c -= 1;
		d += 60;


	}
	e = c - a;
	f = d - b;
	if (f == 60)
	{
		e += 1;
		f -= 60;
	}
	printf("%d %d", e,f);
	return 0;
}
