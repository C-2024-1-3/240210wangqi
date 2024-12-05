#include<iostream>
using namespace std;
double num[20];
int main()
{
	double tmp;//提前定义中间值tmp
	for (int i = 0; i < 10; i++)
	{
		cin >> num[i];
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = i; j < 9; j++)//注意最大是9不是10
		{
			if (num[j] > num[j + 1])//如果前面的数比后面的数大
			{
				tmp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = tmp;
			}//交换位置
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << num[i] << " ";//输出
	}
	return 0;
}