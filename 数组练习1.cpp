#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);

	// 1.找出并打印最重的小猪

	int arr[5] = { 300,350,200,400,250 };
	int max = 0;
	for (int i = 0;i < 5;i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "最重的小猪的体重为：" << max << endl;

	// 2.请声明一个5个元素的数组，并且将元素逆置

	int arr1[5] = { 5,2,3,4,1 };
	cout << "一开始的数组：";
	for (int i = 0;i < 5;i++)
	{
		cout << arr1[i] << endl;
	}
	int start = 0;
	int end = sizeof(arr1) / sizeof(arr1[0]) - 1;
	
	while (start < end)
	{
		int a = arr1[start];
		arr1[start] = arr1[end];
		arr1[end] = a;

		start++;
		end--; 
	}
	cout << "倒置后的数组：" << endl;
	for (int i = 0;i < 5;i++)
	{
		cout << arr1[i] << endl;
	}
	


	return 0;
}