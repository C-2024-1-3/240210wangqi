#include<iostream>
#include<string>
using namespace std;
int number[30];
int main()
{
	cout << "Enter a string:";
	char str[100];
	cin.getline(str, 100);//����һ�仰
	int len = strlen(str);//���㳤��
	for (int i = 0; i < len; i++)
	{
		int asc = (int)str[i];
		if ((asc >= 65) && (asc <= 90))//����Ǵ�д��ĸ
		{
			int asc1 = asc - 65;
			number[asc1]++;
		}
		if ((asc >= 97) && (asc <= 122))//�����Сд��ĸ
		{
			int asc2 = asc - 97;
			number[asc2]++;
		}
	}
	for (int i = 0; i < 26; i++)//��������
	{
		if (number[i] != 0)
		{
			cout << (char)(i + 97) << ":";//��ԭΪСд��ĸ
			cout << number[i] << " times" << endl;
		}
	}
	return 0;
}