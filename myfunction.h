#pragma once
#ifndef __MY_FUNCTION__
#define __MY_FUMCTION__
#include<stdio.h>
#include<math.h>
int is_prime(int a)//ÖÊÊıÅĞ¶ÏÆ÷
{

	using namespace std;
		int b = sqrt(a);
	int m = 1;
	for (m = 1; m <= b; m++)
	{
		int ret = a % m;
		if (ret == 0 && m != 1)
		{
			goto case0;
		}
		else if (m == b)
		{
			goto case1;
		}
	}
case0:
	return 0;
case1:
	return 1;

}
#endif 

