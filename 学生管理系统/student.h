/*student.h*/
using namespace std;
#ifndef DATE1_
#define DATE1_
struct date1//学生结构体
{
	int num;//序号
	char name[15];//姓名
	int xyr;//幸运日
	char sr[15];//生日
	float xd;//线代
	float ty;//体育
	float wl;//物理
};
#endif
#ifndef STUDENT_
#define STUDENT_
struct student//学生链表
{
	date1 info;
	student *next,*pre;
};
#endif
#ifndef LIST_
#define LIST_
class list//定义链表类
{
	protected:
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
	void remove(student *);//删除某节点
	void show();//显示整个链表
	void singleinput(student *);//输入单个信息
	void singleshow(student *);//显示单个信息
	student* search();//搜索返回指针
	void search_();//搜索显示数据
	void modify(student *);//修改信息
	void destory();//销毁整个链表
	void scorefalse();//输出不及格名单
	void percent();//输出总体百分比
	void singlepercent();//输出单科百分比
	void txtsavefile();//导出到文件
	void openfile();//从文件读取
	void savefile();//保存到文件
	void showt();//显示表头
};
#endif
