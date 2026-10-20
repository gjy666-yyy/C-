#include <iostream>
using namespace std; 
#include <string>
int main()
{
	//整型

	int a = 0; 

	cout << "please input a:" << endl;
	cin >> a; 
	cout << "a=" << a << endl;
	
	

	//浮点型

	float f = 3.14f;
	
	cout << "please input f:\n";
		cin >> f;
		cout << "f=" <<f << endl;

    //字符型

		char ch = 'a';
		cout << "please input ch:\n";
		cin >> ch;
			cout << "ch=" <<ch<<endl;

	//字符串型
	
			string str = "abcd";
			cout << "please input str:" << endl;
			cin >> str;
				cout << "str=" << str << endl;

    //布尔类型
				bool flag = false;
				cout << "please input flag" << endl;
				cin >> flag;  //只要不是非0都是真
				cout << "flag=" << flag << endl;


		return 0;

}