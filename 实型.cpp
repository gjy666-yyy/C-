#include <iostream>
using namespace std;

int main()
{
	// 1.单精度 float
	float f1 = 3.145f;

	cout << "f1=" << f1 << endl;

	//2.双精度 double
	double f2 = 3.14159232;
	cout << "f2=" << f2 << endl;

	int sum = sizeof(f1) + sizeof(f2);
	//统计float和double的内存大小

	cout << "float size=" << sizeof(f1) << endl;
	cout << "double size=" << sizeof(f2) << endl;
	cout << sum << endl;

	return 0;
}