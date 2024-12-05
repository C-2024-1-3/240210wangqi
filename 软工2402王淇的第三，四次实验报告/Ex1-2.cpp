#include<iostream>
using namespace std;
int main()
{
	const double PI = 3.14;
	float r, h,v;
	cin >> r >> h;
	v = (PI * r *r * h) / 3;
	cout << v;
	return 0;
}
