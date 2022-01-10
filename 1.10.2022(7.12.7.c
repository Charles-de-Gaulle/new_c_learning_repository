#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define basic_salare 10.00
#define overwork 1.5*10.00
#define tax_below300 0.15
#define tax_add150 0.2
#define tax_lest 0.25
int main(void)
{
	int hours = 0;
	float sum_salare = 0;
	float sum_tax = 0;
	float pure_income = 0;
	printf("type the hours you work this week>");
	scanf("%d", &hours);
	if (hours <= 40)
	{
		sum_salare = hours * basic_salare;
	}
	else
	{
		sum_salare = 40 * basic_salare + overwork * hours * basic_salare;
	}
	if (sum_salare <= 300)
	{
		sum_tax = tax_below300 * sum_salare;
	}
	else if (sum_salare > 300 && sum_salare <= 450)
	{
		sum_tax = 300 * tax_below300 + (sum_salare - 300) * tax_add150;
	}
	else
	{
		sum_tax = 300 * tax_below300 + 150 * tax_add150 + (sum_salare - 450) * tax_lest;
	}
	printf("%.3f %.3f %.3f",sum_salare,sum_tax,sum_salare-sum_tax);
	return 0;
}