#define _CRT_SECURE_NO_WARNINGS 1
#include<memory.h>
#include<stdio.h>
#include<time.h>
#define max_book_name 20
#define max_users_name 20
#define max_users_key 20
#define max_users 3
#define max_book 3
#define max_sex 5
#define amax_borrow_number 3 
#define amax_borrow_time 3
#define bmax_borrow_number 2 
#define bmax_borrow_time 2
#define umax_borrow_number 1 
#define umax_borrow_time 1

typedef struct book//�������
{
	int state;                         //ͼ��״̬
	time_t borrow_time;                //ͼ����ʱ��
	char book_name[max_book_name];     //ͼ����
	char belong_to[max_users_name];    //������
}book;
typedef struct all_book
{
	book * pf_book;
	book* pointer;
	int size;
}all_book;

typedef struct users //�û�����
{
	char users_name[max_users_name];   //�û���
	char users_key[max_users_key];     //�û�����
	char users_sex[max_sex];           //�û��Ա�
	int borrow_nmuber;                 //�ѽ�����
	int enable;                        //�û�����          -1ϵͳ����Ա 0ͼ�����Ա 1�û�
	int max_borrow_number;             //����������
	int max_borrow_time;               //������ʱ��
}users;
typedef struct all_users
{
	users* pf_users;
	users* _pointer;
	int size;
}all_users;
int login(users* temp_users);
int menu_login();
int menu_adminster();
int menu_adminster_all();
int menu_mameger();
void  create_user(users* temp_users, int* num);
int change_users_key(users* temp_users);
int set_users_ability(users* temp_users);
int change_users_key(users* temp_users);
void print_users(users* temp_users);
int add_book(all_book* temp_all_book);
int search_book(all_book* temp_all_book);
int delete_book(all_book* temp_all_book);
int change_book_info(all_book* temp_all_book);
int sum_book_info(all_book* temp_all_book);
int print_avilible(all_book* temp_all_book);
int borrow_book(all_users* temp_all_users, all_book* temp_all_book, int count);
int back_book(all_users* temp_all_users, all_book* temp_all_book, int count);