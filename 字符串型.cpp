#include <iostream>
using namespace std; 
#include <string> // 用于使用c++字符串的头文件
int main()
{

	// 1.c风格字符串
	// char 字符串名 [] = "" ;

	char str1[] = "hello world";
		
	cout << str1 << endl;

	// 2.c++风格字符串  
	// string 字符串名 = "" ;

	string str2 = "ni hao";

	cout << str2 << endl;

	return 0;

}