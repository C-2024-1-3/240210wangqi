#include<iostream>
#include<math.h>
using namespace std;
int m, n;
int yue1();
int bei1();
int main()
{
	cin >> m >> n;//输入两个数
	cout<<yue1()<<endl<<bei1();
	return 0;
}
int yue1()//求最大公约数
{
	int& m2 = m, & n2 = n;//引用
	int minx = min(m2, n2);
	for (int i = minx; i >= 1; i--)
	{
		if ((m2 % i== 0) && (n2 % i == 0))
		{
			return i;//一满足要求马上输出并停止循环
		}
	}
}
int bei1()//求最小公倍数
{
	int& m1 = m, & n1 = n;
	int maxx = max(m1, n1);
	while (1)
	{
		if ((maxx % m1 == 0) && (maxx % n1 == 0))
		{
			return maxx;//一满足要求马上输出并停止循环
		}
		maxx++;
	}
}