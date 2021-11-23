#define _CRT_SECURE_NO_WARNINGS 1
/*首先将 11 写在第一行的中间。
之后，按如下方式从小到大依次填写每个数 K (K=2,3,\cdots,N \times N)K(K=2,3,⋯,N×N)
若 (K-1)(K−1) 在第一行但不在最后一列，则将 KK 填在最后一行， (K-1)(K−1) 所在列的右一列；
若 (K-1)(K−1) 在最后一列但不在第一行，则将 KK 填在第一列， (K-1)(K−1) 所在行的上一行；
若 (K-1)(K−1) 在第一行最后一列，则将 KK 填在 (K-1)(K−1) 的正下方；
若 (K-1)(K−1) 既不在第一行，也不在最后一列，如果 (K-1)(K−1) 的右上方还未填数，则将 KK 填在
(K-1)(K−1) 的右上方，否则将 KK 填在 (K-1)(K−1) 的正下方*/
#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
int main()
{
	int n,k,row,col,sit;//sit=(n*row-1)+col-1
	scanf("%d", &n);
	int* pc = malloc(sizeof(int) * n * n);
	int i;
	for (i = 0; i < n * n; i++)
	{
		memset(pc+i, 0, sizeof(int));
	}

	for (k = 1; k <= n * n; k++)
	{
		if (k == 1)
		{
			row=1;
			col = n / 2+1;
			sit = (n * (row - 1)) + col - 1;
			*(pc+sit)= k;
		}
		else
		{
			if((row==1)&&col!=n )                    
			{
				row=n;
				col+=1;
				sit = (n * (row - 1)) + col - 1;
				*(pc + sit) = k;
			}
			else if ((col==n)&&row!=1)
			{
				col = 1;
				row -= 1;
				sit = (n * (row - 1)) + col - 1;
				*(pc + sit) = k;
			}
			else if (row == 1 && col == n)
			{
				row += 1;
				col = col;
				sit = (n * (row - 1)) + col - 1;
				*(pc + sit) = k;
			}
			else if (row != 1 && col != n)//
			{
				if (*(pc + (n * (row - 2)) + (col + 1) - 1)==0)
				{
					row -= 1;
					col += 1;
					sit = (n * (row - 1)) + col - 1;
					*(pc + sit) = k;
				}
				else
				{
					row += 1;
					sit = (n * (row - 1)) + col - 1;
					*(pc + sit) = k;
				}
			}

		}
	}
	for (i = 1; i <= n * n; i++)
	{
		if (i % n != 0)
		{
			printf("%d ", *(pc + i-1));
		}
		else
		{
			printf("%d\n", *(pc + i - 1));
		
		}
	}
	return 0;
}