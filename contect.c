#define _CRT_SECURE_NO_WARNINGS 1

#include"contest.h"


void menu()//菜单
{
	printf("**********************************\n");
	printf("********1.Add      2.Del      ****\n");
	printf("********3.Edit       4.Search*****\n");
	printf("********5.Print      0.Exit ******\n");
	printf("**********************************\n");
	printf("**********************************\n");
}


void INITIAL(struct contact* pc)//初始化通讯录
{
	int i;
	//pc->s_p = pc->p;
	pc->sz = init_size;
	memset(&(pc->t), 0, sizeof(pc->t));//初始化成员个数
	for ( i = 0; i < pc->sz; i++)
	{
		//(pc->p) + i;
		memset(pc->p->adr, 0, sizeof(pc->p[i].adr));//地址
		memset(pc->p->callnum ,0, sizeof(pc->p[i].callnum));//电话
		memset(pc->p->name, 0, sizeof(pc->p[i].name));//名字
		memset(pc->p->sex, 0, sizeof(pc->p[i].sex));//性别
	}
	//pc->p = pc->s_p;
}


void con_add(struct contact *pc)//增加成员
{
	/*开辟空间*/
	if (pc->t == pc->sz)
	{
		pepinf*unstay = realloc(pc->p, (pc->sz+add_size)* sizeof(pepinf));
		if (unstay==NULL)
			{
				printf("增加失败\n");
			}
		else
			{
				printf("增加成功\n");
				pc->p = unstay;
				//pc->s_p = unstay;
				pc->sz=pc->sz + add_size;
			}
	}
	printf("名字>");
	scanf("%s", pc->p[pc->t].name);
	printf("电话>");
	scanf("%s", pc->p[pc->t].callnum);
	printf("性别>");
	scanf("%s", pc->p[pc->t].sex);
	printf("地址>");
	scanf("%s", pc->p[pc->t].adr);
	(pc->t)++;//增加成员计数
}


pepinf* search(struct contact* pc)
{
	char search_name[name_max] = { 0 };
	scanf("%s", &search_name);
	int i;
	for (i = 0; i <(pc->t); i++)
	{
		if(strcmp(search_name, pc->p[i].name)==0)
		{
			return &(pc->p[i]);
		}
		else
		{
			;
		}
	}
	return NULL;
}


void delate(struct pepinf* ppc)
{
	memset(ppc->adr, 0, sizeof(ppc->adr));//地址
	memset(ppc->callnum, 0, sizeof(ppc->callnum));//电话
	memset(ppc->name, 0, sizeof(ppc->name));//名字
	memset(ppc->sex, 0, sizeof(ppc->sex));//性别
}


void con_del(struct contact* pc)//删除成员
{
	printf("输入要删除的人姓名->");
	pepinf* ppc = search(pc);
	if (ppc == NULL)		//查找函数
	{
		printf("查无此人\n");
	}
	else
	{
		delate(ppc);		//置空所查联系人
		printf("删除成功\n");
		int i;
		char vacant[name_max] = { 0 };
		for (i = 0; i < pc->t; i++)
		{
			if (strcmp(pc->p[i].name,vacant)==0)//寻找第一个置空位置
			{
				int n;
				for (n=i; n +1<pc->t ; n++)
				{
					memcpy(pc->p[n].adr, pc->p[n + 1].adr, sizeof(pc->p->adr));
					memcpy(pc->p[n].callnum, pc->p[n + 1].callnum, sizeof(pc->p->callnum));
					memcpy(pc->p[n].name, pc->p[n + 1].name, sizeof(pc->p->name));
					memcpy(pc->p[n].sex, pc->p[n + 1].sex, sizeof(pc->p->sex));
				}
				printf("前移成功\n");/*前移过程*/
				break;
			}
			else
			{
				;
			}
			
		}
		pc->t -= 1;//减少成员计数
		if ((pc->t) == (pc->sz) - add_size)
		{
			
			pepinf* unstay = realloc(pc->p, sizeof(pepinf) * (pc->t));
			if (unstay == NULL)
			{
				printf("减少失败\n");
			}
			else
			{
				printf("减少成功\n");
				pc->p = unstay;
				//pc->s_p = unstay;
				pc->sz = pc->sz - add_size;//减少容量计数
			}
		}
	}
}


void con_edit(struct contact* pc)//编辑成员
{
	printf("输入要编辑的人姓名->");
	pepinf* ppc = search(pc);
	if (ppc == NULL)
	{
		printf("查无此人\n");
	}
	else
	{
		delate(ppc);		//置空所查联系人
		printf("删除成功\n");
		printf("名字>");
		scanf("%s", ppc->name);
		printf("电话>");
		scanf("%s", ppc->callnum);
		printf("性别>");
		scanf("%s", ppc->sex);
		printf("地址>");
		scanf("%s", ppc->adr);
	}
}


void con_search(struct contact* pc)//寻找成员
{
	pepinf* ppc = search(pc);
	if (ppc==NULL)
	{
		printf("查无此人\n");
	
	}
	else
	{
		printf("已找到\n");
		printf("姓名：%s\n", ppc->name);
		printf("电话：%s\n", ppc->callnum);
		printf("性别：%s\n", ppc->sex);
		printf("地址：%s\n", ppc->adr);
	}
	
}


void con_print(struct contact* pc)//打印成员,退出到菜单
{
	int i = 0;
	for (i = 0; i < (pc->t);i++)
	{

		if (pc->p->name != 0)
		{
			printf("名字->");
			printf("%s\n", ((pc->p)+i)->name);
			printf("  电话->");
			printf("%s\n", ((pc->p)+i)->callnum);
			printf("  性别->");
			printf("%s\n", ((pc->p)+i)->sex);
			printf("  地址->");
			printf("%s\n", ((pc->p)+i)->adr);
			
		}
	}
}
