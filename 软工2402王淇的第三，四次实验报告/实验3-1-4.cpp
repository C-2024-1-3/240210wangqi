#include<iostream>
using namespace std;
int taozi(int num);
int number = 0;
int main()
{
	cout << taozi(1);//桃子最后只有1个
	return 0;
}
int taozi(int num)
{
    number++;
	if (number == 10)//递归十次
	{
		return num;
	}
    return taozi((num + 1) * 2);	//调用自己，同时加1乘2
}