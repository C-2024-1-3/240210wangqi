#include<iostream>
using namespace std;
class Point {
private:
	int x, y;//定义位置属性
public:
	Point(int x, int y)//构造函数
	{
		this->x = x;
		this->y = y;
	}
	void setPoint(int i, int j)
	{
		x += i;
		y += j;
	}
	void display()//输出
	{
		cout << "点的坐标为：(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	Point p(60, 80);
	cout << "修改前:";
	p.display();
	cout << endl << "输入修改值:";
	int i, j;
	cin >> i >> j;
	p.setPoint(i, j);
	cout << endl << "修改后:";
	p.display();
	return 0;
}