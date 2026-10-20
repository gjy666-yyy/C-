#include <iostream>
using namespace std;

int main()
{
	//cotinue语句
	//作用：在循环语句中，跳过本次循环中余下尚未执行的语句，继续执行下一次循环

	for (int i = 0;i <= 100;i++)
	{
		// 只输出奇数
		if (i % 2 == 0)
			continue; 
		cout << i << endl;
	}

	return 0;
}