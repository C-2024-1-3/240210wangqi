#include<iostream>
using namespace std;
int main()
{
	float price = 0.8;
	int n = 2, num = 0,money=0,day=0;
	while (num <= 100)
	{
		money += n * price;
		n *= 2;
		num += n;
		day++;
	}
	cout << money / day;
	return 0;
}