#include <iostream>
#include <Windows.h>
using namespace std;

// 函数的声明 
	// 作用：告诉编译器函数名称及如何调用函数。函数的实际主体可以单独定义
	// 函数的声明可以多次，但函数的定义只有一次

// 比较函数，实现两个整型数字进行比较，返回较大的值

int max1(int a, int b)
{
	return a > b ? a : b;
}

// 函数的声明
// 如果定义在main函数之后，需要在main函数之前加这个声明
int max1(int a, int b);



int main()
{
	SetConsoleOutputCP(CP_UTF8);

	int a = 10;
	int b = 20;
	cout << max1(a, b) << endl;


}