#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	char i = 0;
//	i += i + ++i + i + i + ++i + i + i + i++ + i + i++ + i + i + ++i + i + ++i;
//	printf(" %c", i);
//	i += i + ++i + ++i + i++ -2;
//	printf("\b\b%c\n", i);
//
//}
#include<iostream>
using namespace std;

class person
{
	friend ostream& operator<< (ostream& cout, person& my_person);
public:
	person& operator++ ()//ǰ��
	{
		my_int++;
		return *this;

	}
	person operator++ (int)//����                                                     ��˷�����ʱ����  
	{                                                 //                                    /
		person temp(0);                               //                                   //
		temp.my_int = this->my_int;                   //                                    ||
		this->my_int++;                               //                                    ||
		return temp;                                  //                                    ||
		                                              //                                    ||
	}                                                 //                                    ||
	                                                  //                                    ||
	person(int i)                                     //                                    ||
	{                                                 //                                    ||
		this->my_int = i;                             //                                    ||
		                                              //                                    ||
	}                                                 //                                    ||
private:                                              //                                    ||
	int my_int;                                       //                                    ||
};                                                    //                                    ||
                                                      //                                    ||
ostream& operator<< (ostream& cout, person& my_person)//                                    ||
{                                                     //                                    ||
	cout << my_person.my_int;                         //                                    ||
	return cout;                                      //                                    ||
	                                                  //                                    ||
}                                                     //                                    ||
void test()                                           //                                    ||
{                                                     //                                    ||
	person my_person(0);                              //                                    ||
	cout << my_person << endl;                        //                                    ||
	my_person++;                                      //                                    ||
	cout << my_person << endl;                        //                                    ||
	++my_person;                                      //                                    ||
	cout << my_person << endl;                        //                                   \\//
	int i;                                            //                                    \/
	//i = (i++)++;              ������������д����++ǰ�÷��ر��������������÷��س���������������Ҳ���Ǳ���
	//cout << i << endl;

}
int main()
{

	test();
	return 0;
}
