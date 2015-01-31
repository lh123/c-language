#include <iostream>
#include "student.h"
using namespace std;
int main()
{
	cout << "欢迎进入学生管理系统\n";
	list stu;
	stu.insert();
	stu.insert();
	stu.insert();
	stu.show();
	stu.percent();
	stu.destory();
}
