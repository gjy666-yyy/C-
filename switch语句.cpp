#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	// switch语句
	// 作用：执行多条件分支语句

	/* 语法：switch（表达式）
	{
	case 结果1：执行语句；break；
	case 结果2：执行语句；break；
	....

	default;执行语句；break；
	*/
	
	//案例：给电影打分
	//10~9 经典
	//8~7 非常好
	//6~5 一般
	//5以下 垃圾
	
	int score = 0;
	cout << "请给电影进行打分" << endl;
	cin >> score;
	cout << "您打的分数为:" << score << endl;

	switch (score)
	{
	case 10:
		cout << "您认为电影是经典" << endl;
		break;
	case 8:
		cout << "您认为电影非常好" << endl;
		break;

	default :
		cout << "您认为电影是垃圾" << endl;
		break;
	}
	
	//switch缺点：判断时候只能是整型或者字符型，不可以是一个区间
	//switch优点：结构清晰，执行效率高

	return 0;
}