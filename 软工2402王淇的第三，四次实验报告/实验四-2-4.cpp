#include<iostream>
using namespace std;
int num[1000];
int main()
{
	int l1, l2,max=0,min=1002;
	int n1[100], n2[100];
	cout << "Enter list1:";
	cin >> l1;
	for (int i = 1; i <= l1; i++)
	{
		cin >> n1[i];
		num[n1[i]]++;//���ü��������˼·
		if (n1[i] > max)//�ҳ�n1��n2�����е����ֵ
		{
			max = n1[i];
		}
		if (n1[i] < min)
		{
			min = n1[i];
		}
	}
	cout << "Enter list2:";
	cin >> l2;
	for (int i = 1; i <= l2; i++)
	{
		cin >> n2[i];
		num[n2[i]]++;
		if (n2[i] > max)
		{
			max = n2[i];
		}
		if (n2[i] < min)//�ҳ�n1��n2�����е���Сֵ
		{
			min = n2[i];
		}
	}
	cout  << "The merged list is ";
	for (int i = min; i <= max; i++)
	{
		for (int j = 1; j <= num[i]; j++)//�������
		{
			cout << i<< " ";
		}
	}
}