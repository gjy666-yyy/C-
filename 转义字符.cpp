#include <iostream>
using namespace std;

int main()
{

	//转义字符

	//换行符：\n

	cout << "hello world\n";    // \n代表替代 (<<endl) 意思换行

	//反斜杠：\\
    
	cout << "\\" << endl;  // 输出两个反斜杠才能输出一个反斜杠


	//水平制表符号：\t      //作用可以整齐输出数据

	cout << "aaa\thello world" << endl;   // \t加前面内容一共占8个字符

	return 0;
}