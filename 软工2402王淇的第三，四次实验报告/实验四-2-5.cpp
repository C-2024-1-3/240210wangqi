#include<iostream>
#include<string>
using namespace std;
char s1[100], s2[100];//定义好两个数组
int indexOf(int l1,int l2);
int main()
{
	cout << "Enter the first string:";
	cin.getline(s1, 100);//保证一句话能够完整输入
	int l1 = strlen(s1);
	cout << "Enter the second string:";
    cin.getline(s2, 100);//保证一句话能够完整输入
	int l2 = strlen(s2);
	cout<<"indexOf(\"";
	for (int i = 0; i < l1; i++)cout << s1[i];
	cout << "\",\"";
	for (int i = 0; i < l2; i++)cout << s2[i];
	cout << "\") is ";
	cout << indexOf(l1,l2);
	return 0;
}
int indexOf(int l1,int l2)
{
	bool tmp = true,tmp2=false;//标记
	int gap = 0;//计算空格数
	for (int i = 0; i < l2 - l1; i++)
	{
		if (s2[i] == ' ')gap++;//遇到空格加1
		if (s2[i] == s1[0])
		{
			tmp2 = true;//标记改变
			for (int j = 0; j < l1; j++)
			{
				if (s2[i + j] != s1[j])
				{
					tmp = false;
					break;
				}
			}
		}
		if ((tmp == true)&&(tmp2==true))//满足条件
		{
			return i -gap+1;
		}
		tmp = true; tmp2 = false;//标记重置
	}
	return -1;
}