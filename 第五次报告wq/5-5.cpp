#include<iostream>
using namespace std;
class Point {
private:
	int x, y;//����λ������
public:
	Point(int x, int y)//���캯��
	{
		this->x = x;
		this->y = y;
	}
	void setPoint(int i, int j)
	{
		x += i;
		y += j;
	}
	void display()//���
	{
		cout << "�������Ϊ��(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	Point p(60, 80);
	cout << "�޸�ǰ:";
	p.display();
	cout << endl << "�����޸�ֵ:";
	int i, j;
	cin >> i >> j;
	p.setPoint(i, j);
	cout << endl << "�޸ĺ�:";
	p.display();
	return 0;
}