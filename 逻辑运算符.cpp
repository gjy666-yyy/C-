#include <iostream>
using namespace std;

int main()
{
	//逻辑运算符

	//  非 ！    （如果a为假，则！a为真；如果a为真，则！a为假）

	int a = 10;

	cout << !a << endl;

	cout << !!a << endl;

	//  与 &&    （如果a和b都为真，则为真，否则为假

	int b = 10;
	int c = 20;

	cout << (b&&c) << endl;
    
	b = 10;
	c = 0;

	cout << (b && c) << endl;

	//  或 ||    （有一个为真则为真，两个都假则为假）

	b = 10;
	c = 0;

	cout << (b || c) << endl;

	b = 0;
	c = 0;

	cout << (b || c) << endl;


	return 0;
}