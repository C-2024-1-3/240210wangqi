#include<iostream>
#include<string>
using namespace std;
class Student {
	friend void max(Student* ptr);//������Ԫ��ʹmax�����ܷ���˽������
private:
	string num;
	int score;
public:
	void setStudnet(const string& n, int s)//��ʼ��
	{
		num = n;
		score = s;
	}
};
string maxn;//����һ��ȫ�ֱ���
void max(Student* ptr)
{
	static int maxScore = 0;//����һ����̬�ֲ�������������������ֵ������
	if (ptr->score > maxScore)
	{
		maxScore = ptr->score;
		maxn = ptr->num;
	}
}
int main()
{
	Student s[10];
	string num;
	int score;
	for (int i = 0; i < 5; i++)
	{
		cout << "��" << (i + 1) << "��ѧ����ѧ�ţ�";
		cin >> num; cout << endl;
		cout << "��" << (i + 1) << "��ѧ���ķ�����";
		cin >> score; cout << endl;
		s[i].setStudnet(num, score);
	}
	Student* ptr = &s[0];//����һ������ָ��
	for (int i = 0; i < 5; i++)
	{
		max(ptr + i);
	}
	cout << "������ߵ�ѧ����ѧ���ǣ�" << maxn;
	return 0;
}