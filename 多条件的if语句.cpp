#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);

	int score = 0;
	cout << "请输入一个分数：" << endl;
	cin >> score;
	cout << "输入的分数为:" << score << endl;

	if (score > 600)
	{
		cout << "恭喜你考上一本大学!" << endl;
	}
	else if (score > 500)
	{
 
		cout << "恭喜你考上二本大学!" << endl;
	}
	else if (score > 400)
	{

		cout << "恭喜你考上三本大学!" << endl;
	}
	else 
	{

		cout << "恭喜你是一头猪!" << endl;
	}
	return 0;
}