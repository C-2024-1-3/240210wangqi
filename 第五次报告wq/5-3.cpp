#include<iostream>
using namespace std;
class Pattern {
private:
	int length, height, width;//��������
public:
	void setPattern(int l,int w,int h)//�ṩ�ӿ�
	{
		length = l, width = w, height = h;
	}
	void showPattern()
	{
		cout << length * width * height;
	}
};
int main()
{
	Pattern p1, p2, p3;//��������������
	int l, w, h;
	cout << "��һ�������壺";
	cin >> l >> w >> h;
	cout << endl;
	p1.setPattern(l, w, h);
	cout << "�ڶ��������壺";
	cin >> l >> w >> h;
	cout << endl;
	p2.setPattern(l, w, h);
	cout << "�����������壺";
	cin >> l >> w >> h;
	cout << endl;
	p3.setPattern(l, w, h);
	cout << "��һ������������:";
	p1.showPattern(); cout << endl;
	cout << "�ڶ�������������:";
	p2.showPattern(); cout << endl;
	cout << "����������������:";
	p3.showPattern(); cout << endl;
	return 0;
}