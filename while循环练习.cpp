#include <iostream>
#include <Windows.h>
using namespace std;
#include <ctime>   //time系统时间头文件
int main()
{
	//猜数字

	SetConsoleOutputCP(CP_UTF8);
	int again = 1;
	while (again==1)
	{

		srand((unsigned int)time(NULL));

		int num = rand() % 100 + 1;
		//cout << num << endl;

		int va1 = 0;
		int count = 0;
		const int maxCount = 7;
		cout << "新一局开始！" << endl;
		
		while (1)
		{
			count++;
				cout << "请输入猜测数字,剩余机会:" << maxCount-count+1 << endl;
			cin >> va1;

			if (va1 > num)
			{
				cout << "猜测数字过大" << endl;
			}
			else if (va1 < num)
			{
				cout << "猜测数字过小" << endl;
			}
			else
			{
				cout << "恭喜你猜对了" << endl;
				break;
			}
			if (count >= maxCount)
			{
				cout << "机会用完!游戏结束,正确数字是：" << num << endl;
				break;
			}
		}
		cout << "输入1再来一局,输入0游戏结束:";
		cin >> again;
	}
	cout << "游戏退出!" << endl;
	return 0;
}