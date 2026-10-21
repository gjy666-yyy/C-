#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);

	/* 考试成绩统计
	*              语文      数学      英语
	*   张三       100       100       100
	*   李四       90        50        100
	*   王五       60        70        80
	*/

	int arr[3][3] = {
	{ 100,100,100 },
	{ 90,50,100 },
	{ 60,70,80 }
	};
	string name[3] = { "张三","李四","王五" };

	for (int i = 0;i < 3;i++)
	{
		int sum = 0; // 统计分数总和变量
		for (int j = 0;j < 3;j++)
		{
			sum += arr[i][j];


			//cout << arr[i][j] << " " ;
		}
		cout << name[i]<<"的总分为:" << sum  << endl;
	}




	return 0;
}
