#include <iostream>
#include <Windows.h>
using namespace std;


int main()
{
	SetConsoleOutputCP(CP_UTF8);

	//选择结构-多行if语句
	 
	int score = 0;
	cout << "请输入一个分数：" << endl;
	cin >> score;
	cout << "您输入的分数为：" << score << endl;

	if (score > 600)
	{
		cout << "恭喜考上一本大学！" << endl;
	}
	else
	{
		cout << "谢谢陪跑" << endl;
	}



	return 0;

}