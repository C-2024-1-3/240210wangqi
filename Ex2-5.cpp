#include<iostream>
#include<string>
using namespace std;
int main()
{
	char str[1000];
	int algnum = 0, banum = 0, number = 0, othnum = 0;
	cin.getline(str, 1000);
	int length = strlen(str);
	int asc;
	for (int i = 0; i < length; i++)
	{
		asc = (int)str[i];
		if ((asc >= 49) && (asc <= 57))number++;
		else if (((asc <= 90) && (asc >= 65)) || ((asc >= 97) && (asc <= 122)))algnum++;
		else if (asc == 32)banum++;
		else
		{
			othnum++;
		}
	}
	cout << "��Ӣ����ĸ��" << algnum << endl;
	cout << "�ո�" << banum << endl;
	cout << "���֣�" << number << endl;
	cout << "������" << othnum;
	return 0;
}