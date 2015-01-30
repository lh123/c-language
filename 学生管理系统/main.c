#include <iostream>
#include "student.h"
using namespace std;
int main()
{
	list stu;
	stu.insert();
	stu.insert();
	stu.show();
	stu.remove(stu.search());
	stu.insert();
	stu.show();
}
