#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	if ((a + b <= c) || (a + c <= b) || (b + c <= a))
	{
		cout << "������������";
		return 0;
	}
	float all = a + b + c;
	cout << all;
	if ((a == b) || (b == c) || (a == c))
	{
		cout << endl << "�ǵ���������";
	}
	else cout << endl << "���ǵ���������";
	return 0;
}