#include <iostream>
#include <Windows.h>
#include "swap.h"
using namespace std;


// 函数的分文件编写
	// 作用：让代码结构更清晰

	// 实现两个数字交换的函数
//void swap(int a, int b);
/*void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}*/

// 1.创建.h后缀名的头文件
// 2.创建.cpp后缀名的源文件
// 3.在头文件中写函数的声明
// 4.在源文件中写函数的定义

int main()
{
	SetConsoleOutputCP(CP_UTF8);

	int a = 10;
	int b = 20;
	swap(a, b);
	
}