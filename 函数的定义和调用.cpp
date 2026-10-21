#include <iostream>
#include <Windows.h>
using namespace std;

// 函数的定义
	// 1.返回值类型
	// 2.函数名
	// 3.参数列表
	// 4.函数体语句
	// 5.return 表达式
	// 
// 定义一个加法函数，实现两个数相加
// 函数定义的时候并没有真实的数据，它只是一个形式上的参数，简称（形参）
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}

int main()
{
	SetConsoleOutputCP(CP_UTF8);

	//main函数中调用add函数
	int a = 10;
	int b = 20;

	//函数调用语法：函数名称（参数）
	//a和b称为实际参数，简称（实参）
	int c   =   add(a, b);
	cout << "c=" << c << endl;

	a = 100;
	b = 500;
	c = add(a, b);
	cout << "c=" << c << endl;    
}