#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);

	//嵌套if语句

	//如果大于600分 一本
	  //大于700分  北大
	  //大于650分  清华
	  //其余        人大
	//如果大于500分  二本
	//如果大于400分  三本

	int score = 0;
	cout << "请输入一个分数：" << endl;
	cin >> score;
	cout << "您输入的分数为：" << score << endl;

	if (score > 600)
	{
		cout << "恭喜你考入一本大学！" << endl;

		if (score > 700)
		{
			cout << "恭喜你考入北大!" << endl;
		}
		else if (score > 650)
		{
			cout << "恭喜你考入清华!" << endl;
		}
		else 
		{
			cout << "恭喜你考入人大!" << endl;
		}

	}
	else if (score > 500)
	{
		cout << "恭喜你考入二本大学!" << endl;
	}
	else if (score >= 400)
	{
		cout << "恭喜你考入三本大学!" << endl;
	}
	else 
	{
		cout << "恭喜你是一头猪!" << endl;
	}






}