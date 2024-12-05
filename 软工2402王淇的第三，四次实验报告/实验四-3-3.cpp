#include<iostream>
using namespace std;
void NumberSort(int* arr,int max);
int n;
int main()
{
	cin >> n;
	int max = 0;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		if (tmp > max)
		{
			max = tmp;//记录下最大值
		}
		*(arr + i) = tmp;
	}
	NumberSort(arr,max);//使用选择排序
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i)<<" ";//输出
	}
	delete[] arr;//释放内存
	return 0;
}
void NumberSort(int* arr,int max)
{
	int min = max,minn,tmp;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)//记录下每轮最小值
		{
			if (*(arr + j) <min)
			{
				min = *(arr+j);
				minn = j;
			}
		}
		tmp = *(arr + minn);
		*(arr + minn) = *(arr + i);
		*(arr + i) = tmp;//将最小值丢到最前面
		min = max;//还原
	}
}