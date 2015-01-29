#include <iostream>
#include <string>
using namespace std;
class student//申明学生类
{
	private:
	int num;
	string name;
	int xyr;
	string sr;
	int xd;
	int ty;
	int wl;
	public:
	student(int,string,int,string,int,int,int);//构造函数
	void show();
}
student::student(int a,string b,int c,string d,int e,int f,int g)
{
	num=a;
	name=b;
	xyr=c;
	sr=d;
	xd=e;
	ty=f;
	wl=g;
}
