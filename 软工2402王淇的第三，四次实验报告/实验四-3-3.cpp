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
			max = tmp;//��¼�����ֵ
		}
		*(arr + i) = tmp;
	}
	NumberSort(arr,max);//ʹ��ѡ������
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i)<<" ";//���
	}
	delete[] arr;//�ͷ��ڴ�
	return 0;
}
void NumberSort(int* arr,int max)
{
	int min = max,minn,tmp;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)//��¼��ÿ����Сֵ
		{
			if (*(arr + j) <min)
			{
				min = *(arr+j);
				minn = j;
			}
		}
		tmp = *(arr + minn);
		*(arr + minn) = *(arr + i);
		*(arr + i) = tmp;//����Сֵ������ǰ��
		min = max;//��ԭ
	}
}