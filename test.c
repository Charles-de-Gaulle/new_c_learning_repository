#define _CRT_SECURE_NO_WARNINGS 1
#include"contest.h"


int main()
{
	int input = 0;//��������
	struct contact con;//����ͨѶ¼�ṹ��
	con.p = malloc(init_size * sizeof(pepinf));//ΪͨѶ¼���䶯̬��ַ
	
	/*�жϿ����Ƿ�ɹ�*/
	if (con.p == NULL)
	{
		printf("����ʧ��\n");
	}
	else
	{
		;
	}
	INITIAL(&con);//��ʼ��ͨѶ¼
	/*��ʼʹ��ͨѶ¼*/
	do
	{
		
		menu();//��ӡ�˵�
		scanf("%d", &input);//ץȡ����
	
		switch (input)//ѡ���֧
		{
		case ADD://���ӳ�Ա
			con_add(&con);
			break;
		case DEL://ɾ����Ա
			con_del(&con);
			break;
		case EDIT://�༭��Ա
			con_edit(&con);
			break;
		case SEARCH://Ѱ�ҳ�Ա
			con_search(&con);
			break;
		case PRINT://��ӡͨѶ¼
			con_print(&con);
			break;
		default:
			break;
		}
	} while (input);
	free(con.p);//�ͷ�ͨѶ¼�ڴ�
	con.p = NULL;//�ÿն�̬�ڴ�ָ��
	return 0;
}