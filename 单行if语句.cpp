#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	//选择结构 单行if语句
	
	int money = 0;

	cout << "请输入钱的数量" << endl;

	cin >> money;

	cout << "输入的钱立刻给" << endl;

	// if条件后面不能加分号
	if (money > 10000000)
	{


		cout << "郭嘉宇本人" << endl;
	}
	return 0;
}