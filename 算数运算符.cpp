#include <iostream>
using namespace std;

int main()
{

	// 1.加减乘除

	int a1 = 10;
	int b1 = 3;
	
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;

	//两个小数可以相除

	double a2 = 0.2;
	double b2 = 0.1;
	cout << a2 / b2 << endl;

	// 2.取模   （本质求余数）  
	// 两个小数不可取模
	int a3 = 3;
	int b3 = 2;

	cout << a3 % b3 << endl;  

	// 3.前置递增       （先让变量加1，再进行表达式运算）                          

	int a = 10;                                    
	++a;  //让变量加1
	cout << "a=" << a << endl;

	// 后置递增         （先进行表达式运算，再让变量加1）

	int b = 10;
	b++;  //也加1
	cout << "b=" << b << endl;

	// 两者区别

	int a4 = 10;
	int b4 = ++a4 * 10;

	cout << "a4=" << a4 << endl;
	cout << "b4=" << b4 << endl;

	int a5 = 10;
	int b5 = a5++ * 10;

	cout << "a5=" << a5 << endl;
	cout << "b5=" << b5 << endl;

	// 4.前后置递减   (与递增性质相同）

	int a6 = 10;
	int b6 = 10;
	--a6;
	b6--;
	cout << "a6=" << a6 << endl;
	cout << "b6" << b6 << endl;

	




	return 0;
    



}