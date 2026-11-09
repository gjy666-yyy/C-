#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

// const的使用场景

struct student
{
	string name;
	int age;
	int score;
};
void printstudents(const student* s)
{ 
	// s->age =100 ;  // 防止误操作
	cout << "姓名：" << s->name << " 年龄： " << s->age << " 分数： " << s->score << endl;
}
int main()
{
	SetConsoleOutputCP(CP_UTF8);

	student s = { "张三",15,70 };

	// 通过函数打印结构体变量信息

	printstudents(&s); 

}