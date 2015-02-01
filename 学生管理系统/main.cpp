#include <iostream>
#include "student.h"
using namespace std;
int main()
{
	cout << "欢迎进入学生管理系统\n";
	cout << "(1)\t读取文件\n";
	cout << "(2)\t保存文件\n";
	cout << "(3)\t录入信息\n";
	cout << "(4)\t显示数据\n";
	cout << "(5)\t搜索信息\n";
	cout << "(6)\t修改信息\n";
	cout << "(7)\t显示不及格\n";
	cout << "(8)\t统计单科信息\n";
	cout << "(9)\t统计所有信息\n";
	cout << "(10)\t删除单个信息\n";
	cout << "(11)\t导出到txt文件\n";
	cout << "(0)\t退出\n";
	list stu;
	char choice;
	while(1)
	{
		cout << "请输入" << endl;
		cin >> choice;
		switch(choice)
		{
			case '1': stu.openfile(); break;
			case '2': stu.savefile(); break;
			case '3': stu.insert(); break;
			case '4': stu.show(); break;
			case '5': stu.search(); break;
			case '6': stu.modify(stu.search()); break;
			case '8': stu.singlepercent(); break;
			case '9': stu.percent(); break;
			case '10': stu.remove(stu.search()); break;
			case '11': stu.txtsavefile(); break;
			case '0': stu.destory(); break;
			default: cout << "输入有误\n"; break;
		}
	}
}
