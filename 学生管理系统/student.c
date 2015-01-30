/*学生链表类*/
#include <iostream>
#include <string>
using namespace std;
struct student//学生结构体
{
	int num;//序号
	string name;//姓名
	int xyr;//幸运日
	string sr;//生日
	int xd;//线代
	int ty;//体育
	int wl;//物理
	student *next,*pre;
};
class list//定义链表类
{
	private:
	student date;
	student *head;
	public:
	list()//构造头节点
	{
		head=(student*)new(student);
		head->next=NULL;
		head->pre=NULL;
	}
	void insert();//插入节点
	void remove(student *p);//删除某节点
	void show();//显示整个链表
}
void remove(student *p)//删除某个节点
{
	p->pre->next=p->next;
	p->next->pre=p->pre;
	delete(p);
}
void list::show() //显示函数
{
	student *current=head;
	current=current->next;//跳过头节点
	while(current->next!=NULL)
	{
		cout << current->num << "\t" << current->name << "\t" << current->xyr << "\t";
		cout << current->sr << "\t" << current->xd << "\t" << current->ty << "\t" << current->wl << "\t" << endl;
	}
}
void list::insert()//输入函数
{
	student *p;
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
	head->next=p;
	p->next=NULL;
	p->pre=head;
	
}
