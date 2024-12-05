#include<iostream>
using namespace std;
int number[20];//定义储存数的数组
bool search(int num,int length);
int main()
{
	int num,length=0;//length为已填充进数组的数的数量
	for (int i = 1; i <= 10; i++)
	{
		cin >> num;
		if (search(num,length) ==true)//判断是否为新数
		{   
			length++;
			number[length] = num;
		}
	}
	for (int i = 1; i <= length; i++)
	{
		cout << number[i]<<" ";
	}
	return 0;
}
bool search(int num, int length)
{
	for (int i = 1; i <= length; i++)//遍历数组
	{
		if (number[i] == num)//如果相同，输出false
		{
			return false;
		}
	}
	return true;
}