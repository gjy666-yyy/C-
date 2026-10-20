#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);

	//语法 ： 表达式1？表达式2：表达式3
	//解释 ：如果1为真，执行2；反之执行3

	int a = 10;
	int b = 20;
	int c = 0;
	// 将a和b作比较，将变量大的值赋值给c

	c = (a > b ? a : b);
	cout << "c=" << c << endl;

	// 在c++中三目运算符返回的是变量，可以继续赋值

	(a > b ? a : b) = 100;
	cout << "a" << a << endl;
	cout << "b" << b << endl;

	return 0;
}