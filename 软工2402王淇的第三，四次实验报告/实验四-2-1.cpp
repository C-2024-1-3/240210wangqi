#include<iostream>
using namespace std;
int number[20];//���崢����������
bool search(int num,int length);
int main()
{
	int num,length=0;//lengthΪ�������������������
	for (int i = 1; i <= 10; i++)
	{
		cin >> num;
		if (search(num,length) ==true)//�ж��Ƿ�Ϊ����
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
	for (int i = 1; i <= length; i++)//��������
	{
		if (number[i] == num)//�����ͬ�����false
		{
			return false;
		}
	}
	return true;
}