#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	//do...while循环语句
	//注意：与while的区别在于会先执行一次循环语句，再判断循环条件

	//案例：在屏幕中输出0到9这10个数字

	int num = 0;
	do
	{
		cout << num << endl;
		num++;
	} while (num < 10);







	return 0;

}
