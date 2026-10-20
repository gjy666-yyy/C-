#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);

	//水仙花数
	//指的是一个三位数，它的每一位上的数字的三次幂之和等于它本身
	//求出所有三位数中的水仙花数

	int num = 100;

	do
	{
		int a = 0; //个位
		int b = 0; //十位
		int c = 0; //百位

		a = num % 10;
		b = num / 10 % 10;
		c = num / 100;
		if (a*a*a+b*b*b+c*c*c== num)
		{
			cout << "水仙花数:"<<num << endl;
		}
		num++;
	} while (num < 1000);





}