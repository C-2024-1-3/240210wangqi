#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:
	int hour;
	int minute;
	int sec;
public:
	void setTime(int h, int m, int s)//提供输入接口
	{
		hour = h;
		minute = m;
		sec = s;
	}
	void showTime()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time tl;  
	int h, m, s;
	cin >> h;      
	cin >> m;
	cin >> s;
	tl.setTime(h, m, s);
	tl.showTime();
	return 0;
}
