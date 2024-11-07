#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int minn=0, maxn=0;
	for (int i=min(a,b);i>=1;i--)
	{
		if ((a % i == 0) && (b % i == 0))
		{
			minn = i;
			break;
		}
	}
	for (int i = max(a, b); i <= a * b; i++)
	{
		if ((i % a == 0) && (i % b == 0))
		{
			maxn = i;
			break;
		}
	}
	cout << minn << endl << maxn;
	return 0;
}