#include<iostream>
using namespace std;
bool is_prime(int num);
int main()
{
	int number = 0,j=2;
	bool tmp = 0;
	while (number <= 200)
	{
		tmp = 0;
		if (is_prime(j) == true)
		{
			cout << j << " ";
			number++;
			tmp = 1;
		}
		if ((number % 10 == 0)&&(number>=10)&&(tmp==1))cout << endl;
		j++; 
	}
	return 0;
}
bool is_prime(int num)
{
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}