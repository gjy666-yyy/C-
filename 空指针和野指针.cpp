#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);

	// 空指针
	// 空指针用于给指针变量进行初始化
	int* p = NULL;
	
	// 空指针不可以进行访问

	// 野指针
	// 在程序中，避免出现野指针 
	int* a = (int*)0x1100;




	return 0;
}