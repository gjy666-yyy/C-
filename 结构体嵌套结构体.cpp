#include <iostream>
#include <Windows.h>
using namespace std;

// 定义学生的结构体
struct student
{
	string name;
	int age;
	int score;
};

// 定义老师的结构体	
struct teacher
{
	int id;
	string name;
	int age;
	struct student stu;
};

int main()
{
	SetConsoleOutputCP(CP_UTF8);

	// 结构体嵌套结构体
	// 创建老师
	teacher t;
	t.name = "老王";
	t.age = 50;
	t.id = 10000;
	t.stu.age = 20;
	t.stu.name = "小王";
	t.stu.score = 60;

}