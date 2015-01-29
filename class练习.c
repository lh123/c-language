#include <iostream>
using namespace std;
class cube //建立类
{
	private:
	int a,b;
	public:
	cube(int x=1,int y=1);
	void input();//输入
	void show()//输出
	{
		cout << "高=" << a << endl;
		cout << "宽=" << b << endl;
	}
	int mianji();//计算面积
};
cube::cube(int x,int y)
{
	a=x;
	b=y;
}
void cube::input()
{
	cin >> a >> b;
}
int cube::mianji()
{
	return a*b;
}
int main()
{
	cube cu;//建立对象
	cu.input();
	cu.show();
	cout << "面积=" << cu.mianji();
}
