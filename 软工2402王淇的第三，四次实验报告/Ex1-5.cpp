#include<iostream>
using namespace std;
int main()
{
	float f, c;
	cin >> f;
	c = (f - 32) / 1.8;
	printf("%.2f", c);
	return 0;
}