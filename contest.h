#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define name_max 20
#define callnum_max 13
#define sex_max 10
#define adr_max 50
#define init_size 3
#define add_size 2

enum menu
{
	EXIT,
	ADD,
	DEL,
	EDIT,
	SEARCH,
	PRINT
};
typedef struct pepinf//单个人信息
{
	char name[name_max];
	char callnum[callnum_max];
	char sex[sex_max];
	char adr[adr_max];
}pepinf;
typedef struct contact//通信录
{
	pepinf* p;
	//pepinf* s_p;
	int t;//现有联系人
	int sz;//容量
}contact;
void INITIAL(struct contact*);
void con_add(struct contact*);
void con_print(struct contact*);
void con_del(struct contact*);
void con_search(struct contact*);
