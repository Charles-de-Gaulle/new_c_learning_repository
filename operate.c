#define _CRT_SECURE_NO_WARNINGS 1
#include "bm.h"
char Administ_name[max_users_key] = "ad";
char Administ_key[max_users_key] = "123";
//�û���¼
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
	if (!test_A_name)//0��
	{
		int test_A_key = strcmp(key, Administ_key);
		if (!test_A_key)//0��
		{
			return -1;//��ϵͳ����Ա
		}
		else
		{
			return -2;
		}
	}
	else
	{
		//�����û����ݿ�
		for (count = 0; count < max_users; count++)
		{
			if (!strcmp(name,temp_users[count].users_name) && !strcmp(key , temp_users[count].users_key))
				return count;//���õ��û�
		}
		return -2;
	}

}

//�����û�
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
//�ɽ���Ŀ��ѯ
int print_avilible(all_book* temp_all_book)
{
	int i;
	printf("�ɽ�������>\n");
	for (i = 0; i < temp_all_book->size; i++)
	{
		if ((temp_all_book->pointer + i)->borrow_time == 0)
			printf("%s\n", (temp_all_book->pointer + i)->book_name);
		else
			continue;
	}
	return 0;
}
//ͼ�����
int borrow_book(all_users* temp_all_users ,all_book* temp_all_book,int count)
{
	int sit;
	printf("�ѽ�%d  ����%d\n",
		(temp_all_users->_pointer+count)->borrow_nmuber,
		(temp_all_users->_pointer + count)->max_borrow_number);
	if ((temp_all_users->_pointer + count)->borrow_nmuber < (temp_all_users->_pointer + count)->max_borrow_number)
	{
		printf("����һ��?>");
		sit = search_book(temp_all_book);
		if (sit != -1)
		{
			if ((temp_all_book->pointer + sit)->borrow_time == 0)
			{
				time(&((temp_all_book->pointer + sit)->borrow_time));
				(temp_all_users->_pointer + count)->borrow_nmuber++;
				strcpy((temp_all_book->pointer + sit)->belong_to, (temp_all_users->_pointer + count)->users_name);
				printf("���ĳɹ�\n");
				return 0;
			}

			else
			{
				printf("����ʧ�ܣ��ѽ��\n");
				return -1;
			}
		}
		else
		{
			printf("�Ҳ���������ʧ��\n");
			return -1;
		}
	}
	else
		printf("������\n");
	return -1;
}
//ͼ��黹
int back_book(all_users* temp_all_users, all_book* temp_all_book, int count)
{
	int i,sit;
	time_t new_time;
	time(&new_time);
	char book_name[max_book_name];
	printf("����������ͼ��\n");
	for (i = 0; i < temp_all_book->size; i++)
	{
		if (!strcmp((temp_all_book->pointer + i)->belong_to, (temp_all_users->_pointer + count)->users_name))
			printf("%s", (temp_all_book->pointer + i)->book_name);
		else
			continue;
	}
	printf("���ı���>");
	sit = search_book(temp_all_book);
	if (sit != -1)
	{
		if (!strcmp((temp_all_book->pointer + sit)->belong_to, (temp_all_users->_pointer + count)->users_name))
		{
			if(((new_time-(temp_all_book->pointer +sit)->borrow_time)/84600)>(temp_all_users->_pointer+count)->max_borrow_time)
				printf("����δ��\n");
			(temp_all_book->pointer + sit)->borrow_time = 0;
			strcpy((temp_all_book->pointer+sit)->belong_to, "0");
			(temp_all_users->_pointer + count)->borrow_nmuber--;
			return 0;
		}
		else
		{
			printf("�黹ʧ�ܣ���δ�����\n");
			return -1;
		}
	}
	else
	{
		printf("�黹ʧ�ܣ����޴���\n");
		return -1;
	}
}
 

// ͼ�����Ա
//ͼ�����
int search_book(all_book* temp_all_book)
{
	int sit=0;
	char book_name[max_book_name];
	scanf("%s", book_name);
	while (sit<max_book)
	{
		if (max_book&& !strcmp(book_name, (temp_all_book->pointer + sit)->book_name))
		{
			printf("�ҵ���\n");
			temp_all_book->pointer = temp_all_book->pf_book;
			return sit;
		}
		
		sit++;
	}
		printf("�Ҳ���\n");
		return -1;
}
//ͼ������
int add_book(all_book* temp_all_book)
{
	int size = temp_all_book->size;
	if (temp_all_book->size < max_book)
	{
		printf("ͼ����>");
		scanf("%s", temp_all_book->pointer[size].book_name);
		temp_all_book->size++;
		temp_all_book->pointer[size].state = 0;
		temp_all_book->pointer[size].borrow_time=0;

		strcpy(temp_all_book->pointer[size].belong_to, "0");
		printf("���ɹ�\n");
		return 0;
	}
	else
	{
		printf("�������\n");
		return -1;
	}
}
//ͼ���ɾ��
int delete_book(all_book* temp_all_book)
{
	int sit;
	printf("Ҫɾ����һ����>");
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
		printf("�Ҳ�����ɾ��ʧ��\n");
		return -1;
	}
}
//ͼ����Ϣ�޸�
int change_book_info(all_book* temp_all_book)
{
	int sit;
	printf("Ҫ�޸���һ����>");
	sit = search_book(temp_all_book);
	if (sit != -1)
	{
		printf("������>");
		scanf("%s", (temp_all_book->pf_book + sit)->book_name);
		printf("�޸ĳɹ�");
		return 0;
	}
	else
	{
		printf("�Ҳ������޸�ʧ��\n");
		return -1;
	}
	

}
//ͳ��ͼ����Ϣ
int sum_book_info(all_book* temp_all_book)
{
	int lead = 0;
	int i;
	for (i = 0; i < temp_all_book->size;i++)
	{
		if((temp_all_book->pf_book+i)->state!=0)
		lead++;
	}
	printf("���%d������%d��\n", lead, temp_all_book->size);
	return 0;
}




//ϵͳ����Ա
//�û�ע��
void  create_user(users* temp_users, int* pnum)
{
	printf("�û���>");
	scanf("%s", &(temp_users[*pnum].users_name));
	printf("����>");
	scanf("%s", &(temp_users[*pnum].users_key));
	printf("�Ա�>");
	scanf("%s", &(temp_users[*pnum].users_sex));
	printf("�û�����(-1ϵͳ����Ա 0ͼ�����Ա 1�û�)>");
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
//�޸��û�����
int change_users_key(users* temp_users)
{
	char new_key1[max_users_key] = { 0 };
	char new_key2[max_users_key] = { 0 };
	printf("Ҫ�޸�������û���>");
	int output = searsh_users(temp_users);
	if (output == -1)
	{
		printf("���޴���\n");
		return -1;
	}
	else
	{
		do {
			if (strcmp(new_key1,new_key2))
			{
				printf("�������벻ͬ������������\n");
			}
			printf("���ҳɹ���������������>");
			scanf("%s", new_key1);
			printf("��ȷ��������>");
			scanf("%s", new_key2);
			if (!strcmp(new_key1 , new_key2))
			{
				strcpy(temp_users[output].users_key , new_key1);
				printf("�޸ĳɹ�\n");
				return 0;
			}
			
		} while (strcmp(new_key1 , new_key2));
	}
	
}
//�޸ĸ�����Ϣ
int chaner_private_information(users* temp_users)
{
	printf("Ҫ������Ϣ���û���>");
	int output = searsh_users(temp_users);
	if (output == -1)
	{
		printf("���޴���\n");
		return -1;
	}
	else
	{
		printf("���ҳɹ�������������Ϣ>");
		scanf("%s", temp_users[output].users_sex);
	}

}
//�����û����͵ȹ���
int set_users_ability(users* temp_users)
{
	int input=0;
	printf("Ҫ�û����͵��û���>");
	int output = searsh_users(temp_users);
	if (output == -1)
	{
		printf("���޴���\n");
		return -1;
	}
	else
	{
		do
		{
			printf("���ҳɹ���������������(-1ϵͳ����Ա 0ͼ�����Ա 1�û�)>");
			scanf("%d", &input);
			if (input == -1 || input == 0 || input == 1)
			{
				temp_users[output].enable = input;
				printf("���óɹ�\n");
			}
			
		} while (input!=-1&& input != 0&& input != 1);
		
	}

}
//��ӡ�û�
void print_users(users* temp_users)
{
	int count;
	char blank[max_users_name] = {'0'};
	printf("�û��� �û����� �û��Ա� �ѽ����� �û�����\n");
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
				printf("ϵͳ����Ա\n");
			else if (temp_users[count].enable == 0)
				printf("ͼ�����Ա\n");
			else if (temp_users[count].enable == 1)
				printf("�û�\n");
		}
		else
		{
			;
		}
	}
	return 0;
}


