#define _CRT_SECURE_NO_WARNINGS 1
#include "bm.h"


//登录菜单
int menu_login()
{
	int test, input;
	do
	{
		printf("**********************************************\n");
		printf("*         Log in to borrow books             *\n");
		printf("*           0.Quit  1.Log in                 *\n");
		printf("**********************************************\n");
		test = scanf("%d", &input);
		if (input==1)
		{
			break;
		}
		else if (!input)
		{
			return 0;
		}
		else
		{
			printf("retype\n");
		}
		if (!test)
		{
			while (getchar()!='\n')
			{
				continue;
			}
		}
	} while (1);
	return 1;
}
//系统管理员菜单
int menu_adminster_all()
{
	int test, input;
	do
	{
		printf("**********************************************\n");
		printf("*             Welcome Adminster              *\n");
		printf("*           Type number to operat            *\n");
		printf("*               1.Create User                *\n");
		printf("*           2.Change Users key               *\n");
		printf("*       3.Change private information         *\n");
		printf("*           4.Set Users ability              *\n");
		printf("*              5.Print users                 *\n");
		printf("*                  0.Quit                    *\n");
		printf("**********************************************\n");
		test = scanf("%d", &input);
		switch (input)
		{
		case 1:
			return 1;
			break;
		case 2:
			return 2;
			break;
		case 3:
			return 3;
			break;
		case 4:
			return 4;
			break;
		case 5:
			return 5;
			break;
		case 0:
			return 0;
			break;
		default:
			printf("retype\n");
			break;
		}
		if (!test)
		{
			while (getchar() != '\n')
			{
				continue;
			}
		}
	} while (1);
}
int menu_adminster()
{
	int test, input;
	do
	{
		printf("**********************************************\n");
		printf("*             Welcome Adminster              *\n");
		printf("*           Type number to operat            *\n");
		printf("*               1.Create User                *\n");
		printf("*           2.Change Users key               *\n");
		printf("*       3.Change private information         *\n");
		printf("*           4.Set Users ability              *\n");
		printf("*              5.Print users                 *\n");
		printf("*              6.Borrow book                 *\n");
		printf("*                  0.Quit                    *\n");
		printf("**********************************************\n");
		test = scanf("%d", &input);
		switch (input)
		{
		case 1:
			return 1;
			break;
		case 2:
			return 2;
			break;
		case 3:
			return 3;
			break;
		case 4:
			return 4;
			break;
		case 5:
			return 5;
			break;
		case 6:
			return 6;
			break;
		case 0:
			return 0;
			break;
		default:
			printf("retype\n");
			break;
		}
		if (!test)
		{
			while (getchar() != '\n')
			{
				continue;
			}
		}
	} while(1);
}
//图书管理员菜单
int menu_mameger()
{
	int test, input;
	do
	{
		printf("**********************************************\n");
		printf("*              Welcome Maneger               *\n");
		printf("*           Type number to operat            *\n");
		printf("*               1.Add book                   *\n");
		printf("*              2.Delete book                 *\n");
		printf("*           3.Change book info               *\n");
		printf("*               4.Search book                *\n");
		printf("*              5.Sum book ifo                *\n");
		printf("*              6.Borrow book                 *\n");
		printf("*                  0.Quit                    *\n");
		printf("**********************************************\n");
		test = scanf("%d", &input);
		switch (input)
		{
		case 1:
			return 1;
			break;
		case 2:
			return 2;
			break;
		case 3:
			return 3;
			break;
		case 4:
			return 4;
			break;
		case 5:
			return 5;
			break;
		case 6:
			return 6;
			break;
		case 0:
			return 0;
			break;
		default:
			printf("retype\n");
			break;
		}
		if (!test)
		{
			while (getchar() != '\n')
			{
				continue;
			}
		}
	} while (1);
}
//用户菜单
int menu_users()
{
	int test, input;
	do
	{
		printf("**********************************************\n");
		printf("*              Welcome Users                 *\n");
		printf("*           Type number to operat            *\n");
		printf("*           1.Print aviliable                *\n");
		printf("*              2.Borrow book                 *\n");
		printf("*               3.Back book                  *\n");
		printf("*                  0.Quit                    *\n");
		printf("**********************************************\n");
		test = scanf("%d", &input);
		switch (input)
		{
		case 1:
			return 1;
			break;
		case 2:
			return 2;
			break;
		case 3:
			return 3;
			break;
		case 0:
			return 0;
			break;
		default:
			printf("retype\n");
			break;
		}
		if (!test)
		{
			while (getchar() != '\n')
			{
				continue;
			}
		}
	} while (1);

}
