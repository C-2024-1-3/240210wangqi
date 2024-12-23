#include<iostream>
using namespace std;
class Pattern {
private:
	int length, height, width;//定义属性
public:
	void setPattern(int l,int w,int h)//提供接口
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
	Pattern p1, p2, p3;//定义三个长方体
	int l, w, h;
	cout << "第一个长方体：";
	cin >> l >> w >> h;
	cout << endl;
	p1.setPattern(l, w, h);
	cout << "第二个长方体：";
	cin >> l >> w >> h;
	cout << endl;
	p2.setPattern(l, w, h);
	cout << "第三个长方体：";
	cin >> l >> w >> h;
	cout << endl;
	p3.setPattern(l, w, h);
	cout << "第一个长方体的面积:";
	p1.showPattern(); cout << endl;
	cout << "第二个长方体的面积:";
	p2.showPattern(); cout << endl;
	cout << "第三个长方体的面积:";
	p3.showPattern(); cout << endl;
	return 0;
}