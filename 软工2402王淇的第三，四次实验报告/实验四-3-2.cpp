#include<iostream>
#include<string>
using namespace std;
char num[100];
int parseHex(int l1);
int main()
{
	cin.getline(num, 100);
	int l1 = strlen(num);
	cout << parseHex(l1);
	return 0;
}
int parseHex(int l1)
{
	int number = 0;
	for (int i = 0; i < l1; i++)
	{
		int asc = (int)num[i];//转换成asc码
		int tmp=1;
		for (int j = 0; j < l1 - 1 - i; j++)
		{
			tmp = tmp * 16;
		}
		if ((asc >= 65) && (asc <= 70))//如果是A到F
		{
			number += (asc - 55) * tmp;
		}
		else {
			number += (asc-48) * tmp;//如果是1到9
		}
		tmp = 16;//复原
	}
	return number;
}