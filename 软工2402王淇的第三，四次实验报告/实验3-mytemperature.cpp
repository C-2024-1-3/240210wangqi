#include<iostream>
using namespace std;
#include"mytemperature.h"
int main()
{
	double j = 120.0,n=10;
	cout << "Celsius    Fahrenheit | Fahrenheit       Celsius" << endl;
	for (double i = 40.0; i >= 31.0; i--)
	{
		printf("%.1f", i);
		cout << "       ";
		printf("%.1f", celsius_to_fah(i));
		cout<< " |      ";
		printf("%.1f", j);
		cout << "        ";
		printf("%.2f", fahrenheit_to_cels(j));
		cout<<endl;
		j = j - n;
	}
	return 0;
}