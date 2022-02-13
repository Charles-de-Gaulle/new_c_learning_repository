#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cctype>
using namespace std;
typedef struct {
	int a;
	char b;
	union {
		int c;
		char d;
	};
}mystruct;
int main()
{
	/*int a = 0, b = 0, c = 0;
	cout << "ÊäÈëabc" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cout << ((a > b ? a : b) > c ? (a > b ? a : b) : c) << endl;*/
	mystruct* p = new mystruct[10];
	p[0] = { 10,'a','a'};
	cout << p[0].a << endl;
	cout << p[0].b << endl;
	cout << p[0].c << endl;
	cout << p[0].d << endl;
	delete[] p;
	return 0;
}