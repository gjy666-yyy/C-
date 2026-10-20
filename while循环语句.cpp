#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);

	//while循环语句
	//语法：while（循环条件）{循环语句}

	//在屏幕中打印0~9这10个数字

	int num = 0;
	while (num < 10)
	{
		cout << num << endl;
		num++;

	}

	return 0;

}