#define _CRT_SECURE_NO_WARNINGS 1
#include "bm.h"
char Administ_name[max_users_key] = "ad";
char Administ_key[max_users_key] = "123";
//用户登录
int login(users* temp_users)
{
	int count = 0;
	char name[max_users_name] = { 0 };
	char key[max_users_key] = { 0 };
	printf("type your name>");
	scanf("%s", name);
	printf("type your key>");
	scanf("%s", key);
	int test_A_name = strcmp(name, Administ_name);
	if (!test_A_name)//0进
	{
		int test_A_key = strcmp(key, Administ_key);
		if (!test_A_key)//0进
		{
			return -1;//总系统管理员
		}
		else
		{
			return -2;
		}
	}
	else
	{
		//查找用户数据库
		for (count = 0; count < max_users; count++)
		{
			if (!strcmp(name,temp_users[count].users_name) && !strcmp(key , temp_users[count].users_key))
				return count;//设置的用户
		}
		return -2;
	}

}

//查找用户
int searsh_users(users* temp_users)
{
	int num;
	char temp_name[max_users_name] = { 0 };
	scanf("%s", &temp_name);
	for (num = 0; num < max_users; num++)
	{
		if (!strcmp(temp_users[num].users_name,temp_name))
		{
			return num;
		}
	}
	return -1;
 }
//可借书目查询
int print_avilible(all_book* temp_all_book)
{
	int i;
	printf("可借阅书有>\n");
	for (i = 0; i < temp_all_book->size; i++)
	{
		if ((temp_all_book->pointer + i)->borrow_time == 0)
			printf("%s\n", (temp_all_book->pointer + i)->book_name);
		else
			continue;
	}
	return 0;
}
//图书借阅
int borrow_book(all_users* temp_all_users ,all_book* temp_all_book,int count)
{
	int sit;
	printf("已借%d  最多借%d\n",
		(temp_all_users->_pointer+count)->borrow_nmuber,
		(temp_all_users->_pointer + count)->max_borrow_number);
	if ((temp_all_users->_pointer + count)->borrow_nmuber < (temp_all_users->_pointer + count)->max_borrow_number)
	{
		printf("借哪一本?>");
		sit = search_book(temp_all_book);
		if (sit != -1)
		{
			if ((temp_all_book->pointer + sit)->borrow_time == 0)
			{
				time(&((temp_all_book->pointer + sit)->borrow_time));
				(temp_all_users->_pointer + count)->borrow_nmuber++;
				strcpy((temp_all_book->pointer + sit)->belong_to, (temp_all_users->_pointer + count)->users_name);
				printf("借阅成功\n");
				return 0;
			}

			else
			{
				printf("借阅失败，已借出\n");
				return -1;
			}
		}
		else
		{
			printf("找不到，借阅失败\n");
			return -1;
		}
	}
	else
		printf("借满了\n");
	return -1;
}
//图书归还
int back_book(all_users* temp_all_users, all_book* temp_all_book, int count)
{
	int i,sit;
	time_t new_time;
	time(&new_time);
	char book_name[max_book_name];
	printf("您借了以下图书\n");
	for (i = 0; i < temp_all_book->size; i++)
	{
		if (!strcmp((temp_all_book->pointer + i)->belong_to, (temp_all_users->_pointer + count)->users_name))
			printf("%s", (temp_all_book->pointer + i)->book_name);
		else
			continue;
	}
	printf("还哪本？>");
	sit = search_book(temp_all_book);
	if (sit != -1)
	{
		if (!strcmp((temp_all_book->pointer + sit)->belong_to, (temp_all_users->_pointer + count)->users_name))
		{
			if(((new_time-(temp_all_book->pointer +sit)->borrow_time)/84600)>(temp_all_users->_pointer+count)->max_borrow_time)
				printf("逾期未还\n");
			(temp_all_book->pointer + sit)->borrow_time = 0;
			strcpy((temp_all_book->pointer+sit)->belong_to, "0");
			(temp_all_users->_pointer + count)->borrow_nmuber--;
			return 0;
		}
		else
		{
			printf("归还失败，您未借此书\n");
			return -1;
		}
	}
	else
	{
		printf("归还失败，查无此书\n");
		return -1;
	}
}
 

// 图书管理员
//图书查找
int search_book(all_book* temp_all_book)
{
	int sit=0;
	char book_name[max_book_name];
	scanf("%s", book_name);
	while (sit<max_book)
	{
		if (max_book&& !strcmp(book_name, (temp_all_book->pointer + sit)->book_name))
		{
			printf("找到了\n");
			temp_all_book->pointer = temp_all_book->pf_book;
			return sit;
		}
		
		sit++;
	}
		printf("找不到\n");
		return -1;
}
//图书的添加
int add_book(all_book* temp_all_book)
{
	int size = temp_all_book->size;
	if (temp_all_book->size < max_book)
	{
		printf("图书名>");
		scanf("%s", temp_all_book->pointer[size].book_name);
		temp_all_book->size++;
		temp_all_book->pointer[size].state = 0;
		temp_all_book->pointer[size].borrow_time=0;

		strcpy(temp_all_book->pointer[size].belong_to, "0");
		printf("入库成功\n");
		return 0;
	}
	else
	{
		printf("书库已满\n");
		return -1;
	}
}
//图书的删除
int delete_book(all_book* temp_all_book)
{
	int sit;
	printf("要删除哪一本？>");
	sit = search_book(temp_all_book);
	if (sit!=-1)
	{
		memset(temp_all_book->pointer+sit, 0, sizeof(book));
		while (temp_all_book->pointer+sit- temp_all_book->pf_book<max_book)
		{
			memcpy(temp_all_book->pointer+sit, temp_all_book->pointer+sit+1, sizeof(book));
			sit++;
		}
		temp_all_book->pointer = temp_all_book->pf_book;
		temp_all_book->size--;
		return 0;
	}
	else
	{
		printf("找不到，删除失败\n");
		return -1;
	}
}
//图书信息修改
int change_book_info(all_book* temp_all_book)
{
	int sit;
	printf("要修改哪一本？>");
	sit = search_book(temp_all_book);
	if (sit != -1)
	{
		printf("新书名>");
		scanf("%s", (temp_all_book->pf_book + sit)->book_name);
		printf("修改成功");
		return 0;
	}
	else
	{
		printf("找不到，修改失败\n");
		return -1;
	}
	

}
//统计图书信息
int sum_book_info(all_book* temp_all_book)
{
	int lead = 0;
	int i;
	for (i = 0; i < temp_all_book->size;i++)
	{
		if((temp_all_book->pf_book+i)->state!=0)
		lead++;
	}
	printf("借出%d本，共%d本\n", lead, temp_all_book->size);
	return 0;
}




//系统管理员
//用户注册
void  create_user(users* temp_users, int* pnum)
{
	printf("用户名>");
	scanf("%s", &(temp_users[*pnum].users_name));
	printf("密码>");
	scanf("%s", &(temp_users[*pnum].users_key));
	printf("性别>");
	scanf("%s", &(temp_users[*pnum].users_sex));
	printf("用户类型(-1系统管理员 0图书管理员 1用户)>");
	scanf("%d", &(temp_users[*pnum].enable));
	if (temp_users[*pnum].enable== -1)
	{
		temp_users[*pnum].max_borrow_number = amax_borrow_number;
		temp_users[*pnum].max_borrow_time = amax_borrow_time;
	}
	else if (temp_users[*pnum].enable == 0)
	{
		temp_users[*pnum].max_borrow_number = bmax_borrow_number;
		temp_users[*pnum].max_borrow_time = bmax_borrow_time;
	}
	else
	{
		temp_users[*pnum].max_borrow_number = umax_borrow_number;
		temp_users[*pnum].max_borrow_time = umax_borrow_time;
	}
	(*pnum)++;
}
//修改用户密码
int change_users_key(users* temp_users)
{
	char new_key1[max_users_key] = { 0 };
	char new_key2[max_users_key] = { 0 };
	printf("要修改密码的用户名>");
	int output = searsh_users(temp_users);
	if (output == -1)
	{
		printf("查无此人\n");
		return -1;
	}
	else
	{
		do {
			if (strcmp(new_key1,new_key2))
			{
				printf("两次输入不同，请重新输入\n");
			}
			printf("查找成功，请输入新密码>");
			scanf("%s", new_key1);
			printf("请确认新密码>");
			scanf("%s", new_key2);
			if (!strcmp(new_key1 , new_key2))
			{
				strcpy(temp_users[output].users_key , new_key1);
				printf("修改成功\n");
				return 0;
			}
			
		} while (strcmp(new_key1 , new_key2));
	}
	
}
//修改个人信息
int chaner_private_information(users* temp_users)
{
	printf("要个人信息的用户名>");
	int output = searsh_users(temp_users);
	if (output == -1)
	{
		printf("查无此人\n");
		return -1;
	}
	else
	{
		printf("查找成功，请输入新信息>");
		scanf("%s", temp_users[output].users_sex);
	}

}
//设置用户类型等功能
int set_users_ability(users* temp_users)
{
	int input=0;
	printf("要用户类型的用户名>");
	int output = searsh_users(temp_users);
	if (output == -1)
	{
		printf("查无此人\n");
		return -1;
	}
	else
	{
		do
		{
			printf("查找成功，请输入新类型(-1系统管理员 0图书管理员 1用户)>");
			scanf("%d", &input);
			if (input == -1 || input == 0 || input == 1)
			{
				temp_users[output].enable = input;
				printf("设置成功\n");
			}
			
		} while (input!=-1&& input != 0&& input != 1);
		
	}

}
//打印用户
void print_users(users* temp_users)
{
	int count;
	char blank[max_users_name] = {'0'};
	printf("用户名 用户密码 用户性别 已借数量 用户类型\n");
	for (count = 0; count < max_users; count++)
	{
		if (strcmp(temp_users[count].users_name, blank))
		{
			
			printf("%s %s %s %d ",
				temp_users[count].users_name,
				temp_users[count].users_key,
				temp_users[count].users_sex,
				temp_users[count].borrow_nmuber);
			if (temp_users[count].enable == -1)
				printf("系统管理员\n");
			else if (temp_users[count].enable == 0)
				printf("图书管理员\n");
			else if (temp_users[count].enable == 1)
				printf("用户\n");
		}
		else
		{
			;
		}
	}
	return 0;
}


