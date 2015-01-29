#include <iostream>
using namespace std;
class cube //建立类
{
	private:
	int a,b;
	public:
	cube(int x=1,int y=1);
	void input();
	void show()
	{
		cout << "高=" << a << endl;
		cout << "宽=" << b << endl;
	}
	int mianji();
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
	cube cu;
	cu.input();
	cu.show();
	cout << "面积=" << cu.mianji();
}
