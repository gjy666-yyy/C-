#include <iostream>
#include <Windows.h>
using namespace std;

// 实现两个数字交换

void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout <<a << endl;
	cout << b << endl;
}

void swap02(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;

}
int main()
{
	SetConsoleOutputCP(CP_UTF8);

	// 值传递

	int a = 10;
	int b = 20;
	//swap01(a, b);

	// 地址传递

	swap02(&a, &b);

	cout << a << endl;
	cout << b << endl;
	 
		
}