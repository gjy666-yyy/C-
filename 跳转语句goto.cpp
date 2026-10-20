#include <iostream>
using namespace std;
int main()
{
	//goto语句
	//作用：可以无条件跳转语句
	//解释：如果标记的名称存在，执行到goto语句时，会跳转到标记的位置

	cout << "1.xxxx" << endl;
	cout << "2.xxxx" << endl;
	goto F;
	cout << "3.xxxx" << endl;
	cout << "4.xxxx" << endl;
	F:
	cout << "5.xxxx" << endl;
}