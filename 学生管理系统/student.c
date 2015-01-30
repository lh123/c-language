/*学生类*/
#include <iostream>
#include <string>
using namespace std;
class student//申明学生类
{
	private:
	int num;//序号
	string name;//姓名
	int xyr;//幸运日
	string sr;//生日
	int xd;//线代
	int ty;//体育
	int wl;//物理
	public:
	student(int,string,int,string,int,int,int);//构造函数
	void show();//显示每个成员的信息
	int sorce(); //及格返回true 否则返回false
	void input();//输入函数
};
student::student(int a,string b,int c,string d,int e,int f,int g)//定义构造函数
{
	num=a;
	name=b;
	xyr=c;
	sr=d;
	xd=e;
	ty=f;
	wl=g;
}
int student::sorce();//定义判断是否及格的函数
{
	if(xd<60||ty<60||wl<60)
	{
		return false;//不及格返回
	}
	else
		return true;//及格返回
}
void student::show() //显示函数
{
	cout << num << "\t" << name << "\t" << xyr << "\t";
	cout << sr << "\t" << xd << "\t" << ty << "\t" << wl << "\t" << endl;
}
void student::input()//输入函数
{
	cout << "请输入序号:";
	cin >> num;
	cout << "请输入姓名:";
	cin >> name;
	cout << "请输入幸运日:";
	cin >> xyr;
	cout << "请输入生日:";
	cin >> sr;
	cout << "请输入线代:";
	cin >> xd;
	cout << "请输入体育:";
	cin >> ty;
	cout << "请输入物理:";
	cin >> wl;
}
