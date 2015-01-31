/*score.cpp*/
#include "score.h"
#define wuli current->info.wl
#define xiandai current->info.xd
#define tiyu current->info.ty
using namespace std;
void score::scorefalse()//显示出不及格的人
{
	student *current=head;
	current=current->next;
	while(current!=NULL)
	{
		if(xiandai<60)
		{
			cout << current->info.name << endl;
			cout << "不及格的科目: 线代" << endl;
			cout << "分数: " << xiandai << endl;
		}
		if(wuli<60)
		{
			cout << current->info.name << endl;
			cout << "不及格的科目: 物理" << endl;
			cout << "分数: " << wuli << endl;
		}
		if(xiandai<60)
		{
			cout << current->info.name << endl;
			cout << "不及格的科目: 体育" << endl;
			cout << "分数: " << tiyu << endl;
		}
		current=current->next;
	}
}
