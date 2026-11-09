#include <iostream>
#include <Windows.h>
using namespace std;

struct student
{
	string name;
	int age;
	int score;
};

// 打印学生的函数
// 1.值传递
void printstudent1(struct student s)
{
	s.age = 100;
	cout << "子函数1 姓名 ：" << s.name << " 年龄： " << s.age << " 分数： " << s.score << endl; 
}
// 2.地址传递
void printstudent2(struct student* p)
{
	p->age = 200;
	cout << "子函数2 姓名 ：" << p->name << " 年龄： " << p->age << " 分数： " << p->score << endl;
}
int main()
{
	SetConsoleOutputCP(CP_UTF8);

	// 将学生传入到一个参数中，打印学生身上的所有信息

	//创建结构体变量
	student s;
	s.age = 20;
	s.name = "张三";
	s.score = 85;
	//printstudent1(s);
	printstudent2(&s);
	cout << "在main函数中 姓名 ：" << s.name << " 年龄： " << s.age << " 分数： " << s.score << endl;
	// 用指针改变的形参会影响实参
}