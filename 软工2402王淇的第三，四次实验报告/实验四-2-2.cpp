#include<iostream>
using namespace std;
double num[20];
int main()
{
	double tmp;//��ǰ�����м�ֵtmp
	for (int i = 0; i < 10; i++)
	{
		cin >> num[i];
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = i; j < 9; j++)//ע�������9����10
		{
			if (num[j] > num[j + 1])//���ǰ������Ⱥ��������
			{
				tmp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = tmp;
			}//����λ��
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << num[i] << " ";//���
	}
	return 0;
}