/*学生链表类
student.c*/
#include <iostream>
#include "student.h"
using namespace std;
void list::singleshow(student *current)
{
	cout << current->info.num << "\t" << current->info.name << "\t" << current->info.xyr << "\t";
	cout << current->info.sr << "\t" << current->info.xd << "\t" << current->info.ty << "\t" << current->info.wl << "\t" << endl;
}
student* list::search()
{
	int i,flag=0;
	cout << "请输入你想查找的序号\n";
	cin >> i;
	student *current=head;
	current=current->next;
	while(current!=NULL)
	{
		if(current->info.num==i)
		{
			flag=1;
		}
		if(flag==1)
		{
			singleshow(current);
			cout << "是否要选择该生 输入1选择 其他跳过\n";
			cin >> flag;
			if(flag==1)
			{
				return current;
				break;
			}
			else
			{
				flag=0;
			}
		}
		current=current->next;
	}
	if(flag==0)
	{
		cout << "没有该生\n";
		return NULL;
	}
}
void list::remove(student *p)//删除某个节点
{
	if(p!=NULL)
	{
		if(p->next=NULL)
		{
			p->pre->next=NULL;
			delete(p);
		}
		else
		{
			p->pre->next=p->next;
			p->next->pre=p->pre;
			delete(p);
		}
	}
	else
		cout << "本次未删除\n";
}
void list::show() //显示函数
{
	student *current=head;
	current=current->next;//跳过头节点
	while(current!=NULL)
	{
		cout << current->info.num << "\t" << current->info.name << "\t" << current->info.xyr << "\t";
		cout << current->info.sr << "\t" << current->info.xd << "\t" << current->info.ty << "\t" << current->info.wl << "\t" << endl;
		current=current->next;
	}
}
void list::insert()//输入函数
{
	student *p,*q=head;
	while(q->next!=NULL)//找到尾部插入
	{
		q=q->next;
	}
	p=(student*)new(student);
	cout << "请输入序号:";
	cin >> p->info.num;
	cout << "请输入姓名:";
	cin >> p->info.name;
	cout << "请输入幸运日:";
	cin >> p->info.xyr;
	cout << "请输入生日:";
	cin >> p->info.sr;
	cout << "请输入线代:";
	cin >> p->info.xd;
	cout << "请输入体育:";
	cin >> p->info.ty;
	cout << "请输入物理:";
	cin >> p->info.wl;
	q->next=p;
	p->next=NULL;
	p->pre=q;
}
