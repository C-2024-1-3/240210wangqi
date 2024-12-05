#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char c;
	cin >> a >> c >> b;
	if (((c == '/') || (c == '%')) && (b == 0))
	{
		cout << "除数不能为0";
		return 0;
	}
	if ((c != '+') && (c != '-') && (c != '*') && (c != '/') && (c != '%'))
	{
		cout << "符号非法";
		return 0;
	}
	if (c == '+')cout << a + b;
	if (c == '-')cout << a - b;
	if (c == '*')cout << a * b;
	if (c == '/')cout << a / b;
	if (c == '%')cout << a % b;
	return 0;
}