#include <iostream>

using namespace std;

#define day 7  //define在main外
 

int main()
{

	cout << "一周总共有=" << day << endl;

	const int month = 12;  //const修饰的变量也是常量
	
	cout << "一年总共=" << month;
	return 0;
}