#define _CRT_SECURE_NO_WARNINGS 1

#include"contest.h"


void menu()//�˵�
{
	printf("**********************************\n");
	printf("********1.Add      2.Del      ****\n");
	printf("********3.Edit       4.Search*****\n");
	printf("********5.Print      0.Exit ******\n");
	printf("**********************************\n");
	printf("**********************************\n");
}


void INITIAL(struct contact* pc)//��ʼ��ͨѶ¼
{
	int i;
	//pc->s_p = pc->p;
	pc->sz = init_size;
	memset(&(pc->t), 0, sizeof(pc->t));//��ʼ����Ա����
	for ( i = 0; i < pc->sz; i++)
	{
		//(pc->p) + i;
		memset(pc->p->adr, 0, sizeof(pc->p[i].adr));//��ַ
		memset(pc->p->callnum ,0, sizeof(pc->p[i].callnum));//�绰
		memset(pc->p->name, 0, sizeof(pc->p[i].name));//����
		memset(pc->p->sex, 0, sizeof(pc->p[i].sex));//�Ա�
	}
	//pc->p = pc->s_p;
}


void con_add(struct contact *pc)//���ӳ�Ա
{
	/*���ٿռ�*/
	if (pc->t == pc->sz)
	{
		pepinf*unstay = realloc(pc->p, (pc->sz+add_size)* sizeof(pepinf));
		if (unstay==NULL)
			{
				printf("����ʧ��\n");
			}
		else
			{
				printf("���ӳɹ�\n");
				pc->p = unstay;
				//pc->s_p = unstay;
				pc->sz=pc->sz + add_size;
			}
	}
	printf("����>");
	scanf("%s", pc->p[pc->t].name);
	printf("�绰>");
	scanf("%s", pc->p[pc->t].callnum);
	printf("�Ա�>");
	scanf("%s", pc->p[pc->t].sex);
	printf("��ַ>");
	scanf("%s", pc->p[pc->t].adr);
	(pc->t)++;//���ӳ�Ա����
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
	memset(ppc->adr, 0, sizeof(ppc->adr));//��ַ
	memset(ppc->callnum, 0, sizeof(ppc->callnum));//�绰
	memset(ppc->name, 0, sizeof(ppc->name));//����
	memset(ppc->sex, 0, sizeof(ppc->sex));//�Ա�
}


void con_del(struct contact* pc)//ɾ����Ա
{
	printf("����Ҫɾ����������->");
	pepinf* ppc = search(pc);
	if (ppc == NULL)		//���Һ���
	{
		printf("���޴���\n");
	}
	else
	{
		delate(ppc);		//�ÿ�������ϵ��
		printf("ɾ���ɹ�\n");
		int i;
		char vacant[name_max] = { 0 };
		for (i = 0; i < pc->t; i++)
		{
			if (strcmp(pc->p[i].name,vacant)==0)//Ѱ�ҵ�һ���ÿ�λ��
			{
				int n;
				for (n=i; n +1<pc->t ; n++)
				{
					memcpy(pc->p[n].adr, pc->p[n + 1].adr, sizeof(pc->p->adr));
					memcpy(pc->p[n].callnum, pc->p[n + 1].callnum, sizeof(pc->p->callnum));
					memcpy(pc->p[n].name, pc->p[n + 1].name, sizeof(pc->p->name));
					memcpy(pc->p[n].sex, pc->p[n + 1].sex, sizeof(pc->p->sex));
				}
				printf("ǰ�Ƴɹ�\n");/*ǰ�ƹ���*/
				break;
			}
			else
			{
				;
			}
			
		}
		pc->t -= 1;//���ٳ�Ա����
		if ((pc->t) == (pc->sz) - add_size)
		{
			
			pepinf* unstay = realloc(pc->p, sizeof(pepinf) * (pc->t));
			if (unstay == NULL)
			{
				printf("����ʧ��\n");
			}
			else
			{
				printf("���ٳɹ�\n");
				pc->p = unstay;
				//pc->s_p = unstay;
				pc->sz = pc->sz - add_size;//������������
			}
		}
	}
}


void con_edit(struct contact* pc)//�༭��Ա
{
	printf("����Ҫ�༭��������->");
	pepinf* ppc = search(pc);
	if (ppc == NULL)
	{
		printf("���޴���\n");
	}
	else
	{
		delate(ppc);		//�ÿ�������ϵ��
		printf("ɾ���ɹ�\n");
		printf("����>");
		scanf("%s", ppc->name);
		printf("�绰>");
		scanf("%s", ppc->callnum);
		printf("�Ա�>");
		scanf("%s", ppc->sex);
		printf("��ַ>");
		scanf("%s", ppc->adr);
	}
}


void con_search(struct contact* pc)//Ѱ�ҳ�Ա
{
	pepinf* ppc = search(pc);
	if (ppc==NULL)
	{
		printf("���޴���\n");
	
	}
	else
	{
		printf("���ҵ�\n");
		printf("������%s\n", ppc->name);
		printf("�绰��%s\n", ppc->callnum);
		printf("�Ա�%s\n", ppc->sex);
		printf("��ַ��%s\n", ppc->adr);
	}
	
}


void con_print(struct contact* pc)//��ӡ��Ա,�˳����˵�
{
	int i = 0;
	for (i = 0; i < (pc->t);i++)
	{

		if (pc->p->name != 0)
		{
			printf("����->");
			printf("%s\n", ((pc->p)+i)->name);
			printf("  �绰->");
			printf("%s\n", ((pc->p)+i)->callnum);
			printf("  �Ա�->");
			printf("%s\n", ((pc->p)+i)->sex);
			printf("  ��ַ->");
			printf("%s\n", ((pc->p)+i)->adr);
			
		}
	}
}
