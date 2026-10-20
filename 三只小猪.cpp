#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);

	//三只小猪称体重，判断哪只最重

	int a = 0;
	int b = 0;
	int c = 0;
	
	cout << "请输入小猪a的体重：" << endl;
	cin >> a;

	cout << "请输入小猪b的体重：" << endl;
	cin >> b;

	cout << "请输入小猪c的体重：" << endl;
	cin >> c;

	cout << "小猪a的体重为;" <<a<< endl;

	cout << "小猪b的体重为;" <<b<< endl;

	cout << "小猪c的体重为;" <<c<< endl;

	if (a > b)
	{
		cout << "a比b重！" << endl;
	
		if (a > c)
		{
			cout << "a最重！" << endl;
		}
		else if (a < c)
		{
			cout << "c最重！" << endl;
		}
		
	}
	else if (b > a)
	{
		cout << "b比a重！" << endl;

		if (b > c)
		{
			cout << "b最重！" << endl;
		}
		else if (b < c)
		{
			cout << "c最重！" << endl;
		}

	}

	return 0;
}