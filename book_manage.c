#define _CRT_SECURE_NO_WARNINGS 1
#include "bm.h"


int main()
{
	int i;
	char blank[max_book_name] = { 0 };
	int output_log;
	int output_ad;
	int output_me;
	int output_us;
	int count;
	//加载数据
	users temp_users[max_users] = { 0 };
	book temp_book[max_book] = { 0 };
	all_book temp_all_book={ temp_book ,temp_book ,0 };
	all_users temp_all_users = { temp_users,temp_users,0 };
	FILE* pfu = fopen("users.dat", "r");
	if (pfu == NULL)
	{
		printf("尚未有用户\n");
	}
	else
	{
		
			/*fscanf(pfu, "%s %s %s %d %d %d %d",
				(temp_users[i].users_name),
				(temp_users[i].users_key),
				(temp_users[i].users_sex),
				&(temp_users[i].borrow_nmuber),
				&(temp_users[i].enable),
				&(temp_users[i].max_borrow_number),
				&(temp_users[i].max_borrow_time));*/
		while (fread(temp_all_users.pf_users + temp_all_users.size, sizeof(users), 1, pfu))
		{
			temp_all_users.size++;
		}

		fclose(pfu);
		pfu = NULL;
		printf("用户读取成功\n");
	}
	FILE* pfb = fopen("book.dat", "r");
	if (pfb == NULL)
	{
		printf("尚未有图书\n");
	}
	else
	{
			/*fscanf(pfb, "%d %d %d %d %s %s",
				&(temp_book[i].state),
				&(temp_book[i].borrow_year),
				&(temp_book[i].borrow_month),
				&(temp_book[i].borrow_day),
				temp_book[i].book_name,
				temp_book[i].belong_to);*/
		while (fread(temp_all_book.pf_book + temp_all_book.size, sizeof(book), 1, pfb))
		{
			temp_all_book.size++;
		}
		fclose(pfb);
		pfb = NULL;
		printf("图书读取成功\n");
	}

	while (1)//进入菜单循环
	{
		output_log = menu_login();
		output_ad = 0;
		output_me = 0;
		output_us = 0;
		temp_all_users.size = 0;
		while (temp_users[temp_all_users.size].max_borrow_number != 0 && temp_all_users.size < max_users)
		{
			temp_all_users.size++;
		}
		if (temp_all_users.size == max_users)
		{
			printf("用户满\n");
		}
		if (output_log)
		{

			count = login(temp_users);
			if (count == -1)
			{
				//进入系统管理员菜单
				do {
					output_ad = menu_adminster_all();

					switch (output_ad)
					{
					case 1:
						if (temp_all_users.size < max_users)
						{
							create_user(temp_users, &temp_all_users.size);
						}
						else
						{
							printf("用户已满\n");
						}
						break;
					case 2:
						change_users_key(temp_users);
						break;
					case 3:
						chaner_private_information(temp_users);
						break;
					case 4:
						set_users_ability(temp_users);
						break;
					case 5:
						print_users(temp_users);
						break;
					}

				} while (output_ad);
			}
			else if (temp_users[count].enable == -1)
			{
				//进入系统管理员菜单
				do {
					output_ad = menu_adminster();

					switch (output_ad)
					{
					case 1:
						if (temp_all_users.size < max_users)
						{
							create_user(temp_users, &temp_all_users.size);
						}
						else
						{
							printf("用户已满\n");
						}
						break;
					case 2:
						change_users_key(temp_users);
						break;
					case 3:
						chaner_private_information(temp_users);
						break;
					case 4:
						set_users_ability(temp_users);
						break;
					case 5:
						print_users(temp_users);
						break;
					case 6:
						goto borrow;
						break;
					}

				} while (output_ad);
			}
			else if (count == -2)
			{
				printf("用户名或密码错误,请重新输入\n");
			}
			else//进入读者菜单或图书管理员菜单
			{
				if (temp_users[count].enable == 0)
				{
					
					do {
						output_me = menu_mameger();

						switch (output_me)
						{
						case 1:
							add_book(&temp_all_book);
							break;
						case 2:
							delete_book(&temp_all_book);
							break;
						case 3:
							change_book_info(&temp_all_book);
							break;
						case 4:
							printf("要查找哪一本？>");
							search_book(&temp_all_book);
							break;
						case 5:
							sum_book_info(&temp_all_book);
							break;
						case 6:
							goto borrow;
							break;
						}

					} while (output_me);
				}
				else if (temp_users[count].enable == 1)
				{
				borrow:
					do {
						output_us = menu_users();

						switch (output_us)
						{
						case 1:
							print_avilible(&temp_all_book);
							break;
						case 2:
							borrow_book(&temp_all_users, &temp_all_book, count);
							break;
						case 3:
							back_book(&temp_all_users, &temp_all_book, count);
							break;
						}

					} while (output_us);

				}

			}

			}
		else
		{
			break;
		}
		
	}
	//储存文件
	pfu = fopen("users.dat", "w");
	if (pfu == NULL)
	{
		printf("储存用户失败\n");
	}
	else
	{
		for (i = 0; i < max_users; i++)
		{
			if (strcmp(temp_users[i].users_name, blank))
			{
				/*fprintf(pfu, "%s %s %s %d %d %d %d",
					temp_users[i].users_name,
					temp_users[i].users_key,
					temp_users[i].users_sex,
					temp_users[i].borrow_nmuber,
					temp_users[i].enable,
					temp_users[i].max_borrow_number,
					temp_users[i].max_borrow_time);*/
				fwrite(temp_all_users.pf_users + i, sizeof(users), 1, pfu);
			}
		}
		fclose(pfu);
		pfu = NULL;
		printf("储存用户成功\n");
	}
	pfb = fopen("book.dat", "w");
	if (pfb == NULL)
	{
		printf("储存图书失败\n");
	}
	else
	{
		for (i = 0; i < temp_all_book.size; i++)
		{
			if (strcmp(temp_users[i].users_name, blank))
			{
				/*fprintf(pfb, "%d %d %d %d %s %s",
					temp_book[i].state,
					temp_book[i].borrow_year,
					temp_book[i].borrow_month,
					temp_book[i].borrow_day,
					temp_book[i].book_name,
					temp_book[i].belong_to);*/
				fwrite(temp_all_book.pf_book + i, sizeof(book), 1, pfb);
			}
			else
			{
				break;
			}
		}
		fclose(pfb);
		pfb = NULL;
		printf("储存图书成功\n");
	}
	return 0;
}
