/*学生类*/
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
};
class listnode//申明链表生类
{
	private:
	student date;
	public:
	//student(int,string,int,string,int,int,int);//构造函数
	void show();//显示每个成员的信息
	int sorce(); //及格返回true 否则返回false
	void input();//输入函数
	student *next;//链表指针
};
/*student::student(int a,string b,int c,string d,int e,int f,int g)//定义构造函数
{
	num=a;
	name=b;
	xyr=c;
	sr=d;
	xd=e;
	ty=f;
	wl=g;
}*/
int student::sorce()//定义判断是否及格的函数
{
	if(date.xd<60||date.ty<60||date.wl<60)
	{
		return false;//不及格返回
	}
	else
		return true;//及格返回
}
void student::show() //显示函数
{
	cout << date.num << "\t" << date.name << "\t" << date.xyr << "\t";
	cout << date.sr << "\t" << date.xd << "\t" << date.ty << "\t" << date.wl << "\t" << endl;
}
void student::input()//输入函数
{
	cout << "请输入序号:";
	cin >> date.num;
	cout << "请输入姓名:";
	cin >> date.name;
	cout << "请输入幸运日:";
	cin >> date.xyr;
	cout << "请输入生日:";
	cin >> date.sr;
	cout << "请输入线代:";
	cin >> date.xd;
	cout << "请输入体育:";
	cin >> date.ty;
	cout << "请输入物理:";
	cin >> date.wl;
}
