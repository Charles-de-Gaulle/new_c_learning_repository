#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int add(int x,int y)
//{
//	int z = x + y;
//	return z;
//}
//int sub(int x, int y)
//{
//	int z = x - y;
//	return z;
//}
//int main()
//{
//	int (*pfadd)(int, int) = &add;
//	int (*pfsub)(int, int) = &sub;
//	int  (*pfarr[2]) (int, int) = { add,sub };
//	//int (*(*ppfarr)[2]) (int, int) = &pfarr;
//	int (*(*ppfarr)[2]) (int, int) = &pfarr;
//	//int ret =(*ppfarr)[0](3, 5);
//	int ret = pfarr[0](3, 5);
//	return 0;
//}