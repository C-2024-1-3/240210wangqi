#include<iostream>
#include<string>
using namespace std;
class Student {
	friend void max(Student* ptr);//设置友元，使max函数能访问私有属性
private:
	string num;
	int score;
public:
	void setStudnet(const string& n, int s)//初始化
	{
		num = n;
		score = s;
	}
};
string maxn;//设置一个全局变量
void max(Student* ptr)
{
	static int maxScore = 0;//设置一个静态局部变量，进出函数变量值不归零
	if (ptr->score > maxScore)
	{
		maxScore = ptr->score;
		maxn = ptr->num;
	}
}
int main()
{
	Student s[10];
	string num;
	int score;
	for (int i = 0; i < 5; i++)
	{
		cout << "第" << (i + 1) << "个学生的学号：";
		cin >> num; cout << endl;
		cout << "第" << (i + 1) << "个学生的分数：";
		cin >> score; cout << endl;
		s[i].setStudnet(num, score);
	}
	Student* ptr = &s[0];//定义一个对象指针
	for (int i = 0; i < 5; i++)
	{
		max(ptr + i);
	}
	cout << "分数最高的学生的学号是：" << maxn;
	return 0;
}