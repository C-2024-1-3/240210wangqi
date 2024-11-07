#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
	int a;
	cin >> a;
	int xn, xnp=0;
	xn = a;
	while(abs(xn-xnp)>1e-5)
	{
		xnp = floor(xn + a / xn) / 2;
	}
	cout << xnp;
	return 0;
}