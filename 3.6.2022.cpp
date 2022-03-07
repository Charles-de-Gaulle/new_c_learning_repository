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
	person& operator++ ()//前置
	{
		my_int++;
		return *this;

	}
	person operator++ (int)//后置                                                     因此返回临时变量  
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
	//i = (i++)++;              不存在这样的写法，++前置返回被操作数自身，后置返回常数，而被操作数也该是变量
	//cout << i << endl;

}
int main()
{

	test();
	return 0;
}
