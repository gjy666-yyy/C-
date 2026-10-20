#include <iostream>
using namespace std;

int main()
{

	//字符型语法：char ch=‘？’;
	char ch = 'a';

	cout << "char size=" << sizeof(char) << endl;

	//只能用单引号

	//字符性变量对应ASCLL编码
    
	//1.a（97）
	//2.A (65)
	cout << (int)ch << endl;

	return 0;
}