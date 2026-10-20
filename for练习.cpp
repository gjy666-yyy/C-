#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);

	// 案例：从1开始数到数字100，如果数字个位含有7，或者数字十位有7，或者该数字是7的倍数，我们打印敲桌子，其余数字直接打印输出

	for (int num = 1;num <= 100;num++)
	{
		if (num % 7 == 0 || num % 10 == 7 || num / 10 == 7)
		{
			cout << "敲桌子子" << endl;
		}
		else
		{
			cout << num << endl;
		}
	}
	return 0;
}