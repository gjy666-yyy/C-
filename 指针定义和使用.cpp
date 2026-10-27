#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);

	// 定义指针 
	int a = 10;
	// 指针定义的语法 ：数据类型*指针变量名；
	int* p;
	//  让指针记录变量a的地址
	p = &a;

	cout << "a的地址为：" << &a << endl;
	cout << "指针p为：" << p << endl;

	// 使用指针 
	// 可以通过解引用的方式来找到指针指向的内存
	// 指针前加*号
	*p = 1000;
	cout << "*p=" << *p << endl;
	cout << "a=" << a << endl;

	// 指针所占内存空间
	int b = 10;
	int* p1 = &b;
	cout << "sizeof(int *)=" << sizeof(int *) << endl;
	cout << "sizeof(int *)=" << sizeof(float *) << endl;
	cout << "sizeof(int *)=" << sizeof(double *) << endl;
	cout << "sizeof(int *)=" << sizeof(char*) << endl;

	return 0;
}