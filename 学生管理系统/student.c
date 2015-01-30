/*学生链表类*/
#include <iostream>
#include "student.h"
using namespace std;
void list::remove(student *p)//删除某个节点
{
	p->pre->next=p->next;
	p->next->pre=p->pre;
	delete(p);
}
void list::show() //显示函数
{
	student *current=head;
	current=current->next;//跳过头节点
	while(current!=NULL)
	{
		cout << current->num << "\t" << current->name << "\t" << current->xyr << "\t";
		cout << current->sr << "\t" << current->xd << "\t" << current->ty << "\t" << current->wl << "\t" << endl;
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
	cin >> p->num;
	cout << "请输入姓名:";
	cin >> p->name;
	cout << "请输入幸运日:";
	cin >> p->xyr;
	cout << "请输入生日:";
	cin >> p->sr;
	cout << "请输入线代:";
	cin >> p->xd;
	cout << "请输入体育:";
	cin >> p->ty;
	cout << "请输入物理:";
	cin >> p->wl;
	q->next=p;
	p->next=NULL;
	p->pre=q;
}