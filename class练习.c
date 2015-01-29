#include <iostream>
using namespace std;
class cube
{
	private:
	int a,b;
	public:
	cube(int x=1,int y=1)
	void input();
	void show();
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
	cu.mainji();
}
