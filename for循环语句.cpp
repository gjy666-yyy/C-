#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);

	// for循环语句
	// 语法：for（起始表达式；条件表达式；末尾循环体）

	// 案例：打印0到9的10个数字

	for (int num = 0;num < 10;num++)
	{
		cout << num << endl;
	}







	return 0;
}