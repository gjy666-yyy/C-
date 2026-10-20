#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);

	// 定义的三种方式
	// 1.数据类型 数组名【数组长度】；
	// 2.数据类型 数组名【数组长度】={值1、值2...}；
	// 3.数据类型 数组名【】={值1、值2...}
	
	// 1.

	int arr[5];
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;
	cout << arr[4] << endl;
	
	// 2.
	// 如果在初始化数据的时候，没有全部填写完，会用零来填补
	int arr2[5] = { 10,20,30,40,50 };

	//cout << arr2[0] << endl;
	//cout << arr2[1] << endl;
	//cout << arr2[2] << endl;
	//cout << arr2[3] << endl;
	//cout << arr2[4] << endl;

	// 可以利用循环 输出数组中的元素

	for (int i = 0;i < 5;i++)
	{
		cout << arr2[i] << endl;
	}

	// 3.

	int zrr3[] = { 90,80,70,60,50,40,30,20, };
	for (int i = 0;i < 8;i++)
	{
		cout << zrr3[i] << endl;
	}
	
	// 一维数组名称用途

	int arr3[5] = { 10,20,30,40,50, };
	cout << "整个数组占用的内存空间" << sizeof(arr3) << endl;
	cout << "每个元素占用的内存空间" << sizeof(arr3[0]) << endl;

	// 可以通过数组名查看数组首地址

	cout << "数组首地址为:" << (int)arr << endl;
	cout << "数组中第一个元素的地址：" << (int)&arr[0] << endl;
    cout <<"元素的个数:<< sizeof (arr) / sizeof (arr[o]) << endl;
	// 数组名是常量，不可以赋值 


	return 0;
}