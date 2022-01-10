#define _CRT_SECURE_NO_WARNINGS 1
#include<ctype.h>
#include<stdio.h>
#define basic_salare_1 8.75
#define basic_salare_2 9.33
#define basic_salare_3 10.00
#define basic_salare_4 11.20
#define overwork 1.5*10.00
#define tax_below300 0.15
#define tax_add150 0.2
#define tax_lest 0.25
int main(void)
{
	int input = 0;
	int hours = 0;
	float sum_salare = 0;
	float sum_tax = 0;
	float pure_income = 0;
	int basic_salare = 0;
	int test_input, test_hours;
	do 
	{
		printf("******************************\n");
		printf("1)8.75$                2)9.33$\n");
		printf("3)10.00$              4)11.20$\n");
		printf("5)quit                        \n");
		printf("******************************\n");
		scanf("%d", &input);
		if (input == 5)
		{
			
			break;
		}
		else if (input != 1 && input != 2 && input != 3 && input != 4)
		{
			printf("retype\n");
			
			continue;
		}
		switch (input)
		{
		case 1:
			basic_salare = basic_salare_1;
		case 2:
			basic_salare = basic_salare_2;
		case 3:
			basic_salare = basic_salare_3;
		case 4:
			basic_salare = basic_salare_4;
		default:
			break;
		}
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
		printf("%.3f %.3f %.3f\n", sum_salare, sum_tax, sum_salare - sum_tax);
	} while (1);

	return 0;
}