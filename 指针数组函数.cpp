#include <iostream>
#include <Windows.h>
using namespace std;

// 冒泡排序函数

void bubbleSort(int *arr,int len)
{
	for (int i = 0;i < len - 1;i++)
	{
		for (int j = 0;j < len - 1 - i;j++)
		{
			if (arr[j] > arr[j +1])
			{
				int swap = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = swap;

			}
		}
	}
}

void printArray(int* arr, int len)
{
	for (int i = 0;i < len;i++)
	{
		cout << arr[i] << endl;
	}
}


int main()
{
	SetConsoleOutputCP(CP_UTF8);

	// 案例描述：封装一个函数，利用冒泡排序，实现对整型数组的升序排序。

	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };

	// 数组的长度
	int len = sizeof (arr) / sizeof (arr[0]);

	bubbleSort(arr, len);
	printArray(arr,len);






	return 0;
}