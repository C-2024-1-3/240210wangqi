#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
	float a, xn, xnp;
	cin >> a;
	xn = a;
	if (a >= 0)
	{
		while (1)
		{
			xnp = (1.0 / 2) * (xn + (a / xn));
			if (fabs(xnp - xn) < 0.00001)
			{
				cout << xnp;
				break;
			}
			xn = xnp;
		}
	}
	return 0;
}
