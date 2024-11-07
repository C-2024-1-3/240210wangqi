#include<iostream>
using namespace std;
int main()
{
	char a;
	cin >> a;
	if (((int(a)<123)&&(int(a)>96)))
	{
		int b = (int)a - 32;
		cout << static_cast<char>(b);
	}
	else if ((int(a)<91)&&(int(a)>64))
	{
		cout << (int)a + 1;
	}
	return 0;
}