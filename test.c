#define _CRT_SECURE_NO_WARNINGS 1
#include"contest.h"


int main()
{
	int input = 0;//声明输入
	struct contact con;//声明通讯录结构体
	con.p = malloc(init_size * sizeof(pepinf));//为通讯录分配动态地址
	
	/*判断开辟是否成功*/
	if (con.p == NULL)
	{
		printf("开辟失败\n");
	}
	else
	{
		;
	}
	INITIAL(&con);//初始化通讯录
	/*开始使用通讯录*/
	do
	{
		
		menu();//打印菜单
		scanf("%d", &input);//抓取输入
	
		switch (input)//选择分支
		{
		case ADD://增加成员
			con_add(&con);
			break;
		case DEL://删除成员
			con_del(&con);
			break;
		case EDIT://编辑成员
			con_edit(&con);
			break;
		case SEARCH://寻找成员
			con_search(&con);
			break;
		case PRINT://打印通讯录
			con_print(&con);
			break;
		default:
			break;
		}
	} while (input);
	free(con.p);//释放通讯录内存
	con.p = NULL;//置空动态内存指针
	return 0;
}