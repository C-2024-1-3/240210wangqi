#include<iostream>
using namespace std;
int taozi(int num);
int number = 0;
int main()
{
	cout << taozi(1);//�������ֻ��1��
	return 0;
}
int taozi(int num)
{
    number++;
	if (number == 10)//�ݹ�ʮ��
	{
		return num;
	}
    return taozi((num + 1) * 2);	//�����Լ���ͬʱ��1��2
}