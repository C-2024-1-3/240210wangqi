#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char c;
	cin >> a >> c >> b;
	if (((c == '/') || (c == '%')) && (b == 0))
	{
		cout << "��������Ϊ0";
		return 0;
	}
	if ((c != '+') && (c != '-') && (c != '*') && (c != '/') && (c != '%'))
	{
		cout << "���ŷǷ�";
		return 0;
	}
	if (c == '+')cout << a + b;
	if (c == '-')cout << a - b;
	if (c == '*')cout << a * b;
	if (c == '/')cout << a / b;
	if (c == '%')cout << a % b;
	return 0;
}