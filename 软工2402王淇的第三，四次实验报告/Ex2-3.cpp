#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	if ((a + b <= c) || (a + c <= b) || (b + c <= a))
	{
		cout << "不构成三角形";
		return 0;
	}
	float all = a + b + c;
	cout << all;
	if ((a == b) || (b == c) || (a == c))
	{
		cout << endl << "是等腰三角形";
	}
	else cout << endl << "不是等腰三角形";
	return 0;
}