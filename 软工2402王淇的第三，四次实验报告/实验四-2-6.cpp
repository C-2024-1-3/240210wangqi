#include<iostream>
#include<string>
using namespace std;
int number[30];
int main()
{
	cout << "Enter a string:";
	char str[100];
	cin.getline(str, 100);//输入一句话
	int len = strlen(str);//计算长度
	for (int i = 0; i < len; i++)
	{
		int asc = (int)str[i];
		if ((asc >= 65) && (asc <= 90))//如果是大写字母
		{
			int asc1 = asc - 65;
			number[asc1]++;
		}
		if ((asc >= 97) && (asc <= 122))//如果是小写字母
		{
			int asc2 = asc - 97;
			number[asc2]++;
		}
	}
	for (int i = 0; i < 26; i++)//遍历数组
	{
		if (number[i] != 0)
		{
			cout << (char)(i + 97) << ":";//还原为小写字母
			cout << number[i] << " times" << endl;
		}
	}
	return 0;
}