#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

int my_calculate(int* p, int n)
{
	int answer=0;
	int count;
	if (n == 2)
	{
		answer= p[0] * p[3] - p[1] * p[2];
		//cout << "A" << answer << endl;
		return answer;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			count = 0;
			int* new_p = new int[sizeof((n - 1) * (n - 1))];
			for (int i1 = 0; i1 < n; i1++)
			{
				for (int i2 = 0; i2 < n; i2++)
				{
					if (i1 != 0 && i2 != i)
					{
						new_p[count] = p[i1 * n + i2];
						count++;
					}
				}
			}

			if (i % 2 == 0)
				answer += (p[i]) * my_calculate(new_p, n - 1);
			else
				answer -= (p[i]) * my_calculate(new_p, n - 1);
			//cout << "Aa" << answer << endl;
			delete[]new_p;
		}
	}
	
	return answer;
}


int main()
{
	int  n = 0;
	
	while (cout << "要计算n*n的行列式,输入非数字暂停\n"\
		<<"按照从左至右，从上至下输入即可\n"\
		"仅限数值行列式哦\n" << endl, cin >> n)
	{
		int* p = new int[n * n * sizeof(int)];
		for (int i1 = 0; i1 < n; i1++)
		{
			//cout << "|";
			for (int i2 = 0; i2 < n; i2++)
			{
				cin >> p[i1*n+i2];
			}
			//cout <<"\b" << "|" << endl;
		}
		cout<<my_calculate(p,n)<<endl;


		delete[] p;
	}
	
	
	return 0;
}