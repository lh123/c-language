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
	list()//构造头节
	{
		head=(student*)new(student);
		head->next=NULL;
		head->pre=NULL;
	}
	void insert();//插入节点
	void remove(student *p);//删除某节点
	void show();//显示整个链表
};
